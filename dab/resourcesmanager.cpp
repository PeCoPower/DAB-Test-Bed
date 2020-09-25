#include "resourcesmanager.h"
#include <QIODevice>
#include <QTextStream>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>

ResourcesManager::ResourcesManager(QWidget *parent) : QWidget(parent)
{

}

bool ResourcesManager::uploadProgram(){
    dabFlashingProgram = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                      "C://Users//Thusi//Documents//Peco//DAB-Test-Bed//build-dab-Desktop_Qt_5_13_2_MinGW_64_bit-Debug//dab_program_upload//dslite.bat" /*"C://Windows//System32//cmd.exe"*/,
                                                      "Batch files (*.bat)" /* "Command File (*.exe)"*/);
    QDesktopServices::openUrl(QUrl("file:///" + dabFlashingProgram, QUrl::TolerantMode));
    return true;
}

bool ResourcesManager::establishConnection(){
    QFile connectionFile("C:\\Users\\Thusi\\Documents\\Peco\\DAB-Test-Bed\\dab\\connection.txt");  //Creates a file named serial.txt
    if(!connectionFile.open(QIODevice::WriteOnly | QIODevice::Text)){
        QMessageBox::information(0,"Connection info",connectionFile.errorString());
    }
    QTextStream connect(&connectionFile);
    connect << "A" << "\n";

    if(!connectionFile.open(QIODevice::ReadOnly)){
        QMessageBox::information(0,"Connection info",connectionFile.errorString());
        return false;
    }
        QTextStream connectionStream(&connectionFile);
        while(!connectionStream.atEnd()){
            storedSerialNumber = connectionStream.readLine();
            connectionFile.close();
        }
    return true;
}

QString& ResourcesManager::insertAndReadStoredSerialNumber(QString& inSerial){
    QFile serialNumberFile("C:\\Users\\Thusi\\Documents\\Peco\\DAB-Test-Bed\\dab\\serial.txt");  //Creates a file named serial.txt
    if(!serialNumberFile.open(QIODevice::WriteOnly | QIODevice::Text)){
        QMessageBox::information(0,"WriteOnly Serial File info",serialNumberFile.errorString());
    }
    QTextStream connect(&serialNumberFile);
    connect << inSerial ;
    serialNumberFile.close();

    if(!serialNumberFile.open(QIODevice::ReadOnly)){
        QMessageBox::information(0,"ReadOnly Serial File info",serialNumberFile.errorString());
    }
    else{
        QTextStream serialStream(&serialNumberFile);
        while(!serialStream.atEnd()){
            storedSerialNumber = serialStream.readLine();
            serialNumberFile.close();
        }
    }
    return storedSerialNumber;
}
