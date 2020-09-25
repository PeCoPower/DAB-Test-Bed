#include "dab_ui.h"
#include "ui_dab_ui.h"
#include "resourcesmanager.h"
#include <QTextStream>
#include <QFile>
#include <QIODevice>
#include <QProcess>

DAB_ui::DAB_ui(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DAB_ui)
{
    ui->setupUi(this);
}

DAB_ui::~DAB_ui()
{
    delete ui;
}

void DAB_ui::on_uploadButton_clicked()
{


    bool uploadStatus = resourceMan.uploadProgram();
    if(uploadStatus == true){
    ui->upload_status->setText("Success");
    }
    else
        ui->upload_status->setText("Couldn't upload the program!");
}

void DAB_ui::on_trans_Button_clicked(){
    if(resourceMan.establishConnection() == true)
        ui->trans_status->setText("Connection established");
    else
        ui->trans_status->setText("Connection failed!");
}

void DAB_ui::on_set_sn_button_clicked(){
    QString dialedSN = ui->lineEdit->text();
    if(dialedSN.isEmpty()){
        ui->label->setText("Err: no serial number inserted.");
    }
    else
        ui->label->setText(resourceMan.insertAndReadStoredSerialNumber(dialedSN));
}
