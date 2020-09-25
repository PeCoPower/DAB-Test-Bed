/********************************************************************************
** Form generated from reading UI file 'dab_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAB_UI_H
#define UI_DAB_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DAB_ui
{
public:
    QPushButton *trans_Button;
    QPushButton *uploadButton;
    QLabel *trans_status;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *upload_status;
    QPushButton *set_sn_button;
    QLabel *stored_sn;
    QLabel *label_2;
    QRadioButton *vb1_r_Button;
    QLineEdit *m_vbus1;
    QLineEdit *c_vbus1;
    QLineEdit *m_vbus2;
    QRadioButton *vb2_r_Button;
    QLineEdit *c_vbus2_2;
    QLineEdit *m_power;
    QRadioButton *p_r_Button;
    QLineEdit *c_power;
    QLabel *label_3;
    QFrame *seperation_line;
    QPushButton *run_calibration_button;
    QGroupBox *groupBox;
    QPushButton *reset_button;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QFrame *seperation_line_2;
    QLabel *label_11;
    QProgressBar *progressBar;

    void setupUi(QWidget *DAB_ui)
    {
        if (DAB_ui->objectName().isEmpty())
            DAB_ui->setObjectName(QString::fromUtf8("DAB_ui"));
        DAB_ui->resize(378, 484);
        trans_Button = new QPushButton(DAB_ui);
        trans_Button->setObjectName(QString::fromUtf8("trans_Button"));
        trans_Button->setGeometry(QRect(20, 90, 75, 23));
        uploadButton = new QPushButton(DAB_ui);
        uploadButton->setObjectName(QString::fromUtf8("uploadButton"));
        uploadButton->setGeometry(QRect(20, 40, 75, 23));
        trans_status = new QLabel(DAB_ui);
        trans_status->setObjectName(QString::fromUtf8("trans_status"));
        trans_status->setGeometry(QRect(100, 90, 161, 21));
        label = new QLabel(DAB_ui);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 220, 211, 21));
        lineEdit = new QLineEdit(DAB_ui);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 190, 131, 20));
        upload_status = new QLabel(DAB_ui);
        upload_status->setObjectName(QString::fromUtf8("upload_status"));
        upload_status->setGeometry(QRect(100, 40, 191, 21));
        set_sn_button = new QPushButton(DAB_ui);
        set_sn_button->setObjectName(QString::fromUtf8("set_sn_button"));
        set_sn_button->setGeometry(QRect(250, 190, 71, 23));
        stored_sn = new QLabel(DAB_ui);
        stored_sn->setObjectName(QString::fromUtf8("stored_sn"));
        stored_sn->setGeometry(QRect(20, 190, 111, 16));
        label_2 = new QLabel(DAB_ui);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 220, 61, 20));
        vb1_r_Button = new QRadioButton(DAB_ui);
        vb1_r_Button->setObjectName(QString::fromUtf8("vb1_r_Button"));
        vb1_r_Button->setGeometry(QRect(50, 310, 84, 19));
        m_vbus1 = new QLineEdit(DAB_ui);
        m_vbus1->setObjectName(QString::fromUtf8("m_vbus1"));
        m_vbus1->setGeometry(QRect(41, 341, 81, 21));
        c_vbus1 = new QLineEdit(DAB_ui);
        c_vbus1->setObjectName(QString::fromUtf8("c_vbus1"));
        c_vbus1->setGeometry(QRect(41, 371, 81, 21));
        m_vbus2 = new QLineEdit(DAB_ui);
        m_vbus2->setObjectName(QString::fromUtf8("m_vbus2"));
        m_vbus2->setGeometry(QRect(151, 341, 81, 21));
        vb2_r_Button = new QRadioButton(DAB_ui);
        vb2_r_Button->setObjectName(QString::fromUtf8("vb2_r_Button"));
        vb2_r_Button->setGeometry(QRect(170, 310, 84, 19));
        c_vbus2_2 = new QLineEdit(DAB_ui);
        c_vbus2_2->setObjectName(QString::fromUtf8("c_vbus2_2"));
        c_vbus2_2->setGeometry(QRect(151, 371, 81, 21));
        m_power = new QLineEdit(DAB_ui);
        m_power->setObjectName(QString::fromUtf8("m_power"));
        m_power->setGeometry(QRect(261, 341, 81, 21));
        p_r_Button = new QRadioButton(DAB_ui);
        p_r_Button->setObjectName(QString::fromUtf8("p_r_Button"));
        p_r_Button->setGeometry(QRect(280, 310, 84, 19));
        c_power = new QLineEdit(DAB_ui);
        c_power->setObjectName(QString::fromUtf8("c_power"));
        c_power->setGeometry(QRect(261, 371, 81, 21));
        label_3 = new QLabel(DAB_ui);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 280, 81, 20));
        seperation_line = new QFrame(DAB_ui);
        seperation_line->setObjectName(QString::fromUtf8("seperation_line"));
        seperation_line->setGeometry(QRect(0, 260, 411, 20));
        seperation_line->setFrameShape(QFrame::HLine);
        seperation_line->setFrameShadow(QFrame::Sunken);
        run_calibration_button = new QPushButton(DAB_ui);
        run_calibration_button->setObjectName(QString::fromUtf8("run_calibration_button"));
        run_calibration_button->setGeometry(QRect(40, 410, 80, 21));
        groupBox = new QGroupBox(DAB_ui);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 330, 341, 71));
        reset_button = new QPushButton(DAB_ui);
        reset_button->setObjectName(QString::fromUtf8("reset_button"));
        reset_button->setGeometry(QRect(270, 450, 80, 21));
        label_4 = new QLabel(DAB_ui);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 340, 31, 20));
        label_5 = new QLabel(DAB_ui);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(140, 340, 31, 20));
        label_6 = new QLabel(DAB_ui);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(250, 340, 31, 20));
        label_7 = new QLabel(DAB_ui);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 370, 31, 20));
        label_8 = new QLabel(DAB_ui);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(140, 370, 31, 20));
        label_9 = new QLabel(DAB_ui);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(250, 370, 31, 20));
        label_10 = new QLabel(DAB_ui);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(150, 0, 101, 31));
        seperation_line_2 = new QFrame(DAB_ui);
        seperation_line_2->setObjectName(QString::fromUtf8("seperation_line_2"));
        seperation_line_2->setGeometry(QRect(-10, 130, 411, 20));
        seperation_line_2->setFrameShape(QFrame::HLine);
        seperation_line_2->setFrameShadow(QFrame::Sunken);
        label_11 = new QLabel(DAB_ui);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(150, 150, 111, 20));
        progressBar = new QProgressBar(DAB_ui);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(140, 410, 211, 23));
        progressBar->setValue(24);

        retranslateUi(DAB_ui);

        QMetaObject::connectSlotsByName(DAB_ui);
    } // setupUi

    void retranslateUi(QWidget *DAB_ui)
    {
        DAB_ui->setWindowTitle(QCoreApplication::translate("DAB_ui", "DAB_ui", nullptr));
        trans_Button->setText(QCoreApplication::translate("DAB_ui", "Transmit", nullptr));
        uploadButton->setText(QCoreApplication::translate("DAB_ui", "Upload", nullptr));
        trans_status->setText(QCoreApplication::translate("DAB_ui", "Transmit status", nullptr));
        label->setText(QString());
        lineEdit->setText(QString());
        upload_status->setText(QCoreApplication::translate("DAB_ui", "Upload status", nullptr));
        set_sn_button->setText(QCoreApplication::translate("DAB_ui", "Set", nullptr));
        stored_sn->setText(QCoreApplication::translate("DAB_ui", "Set Serial Number:", nullptr));
        label_2->setText(QCoreApplication::translate("DAB_ui", "Stored SN:", nullptr));
        vb1_r_Button->setText(QCoreApplication::translate("DAB_ui", "V Bus 1 ", nullptr));
        vb2_r_Button->setText(QCoreApplication::translate("DAB_ui", "V Bus 2", nullptr));
        p_r_Button->setText(QCoreApplication::translate("DAB_ui", "Power", nullptr));
        label_3->setText(QCoreApplication::translate("DAB_ui", "CALIBRATION", nullptr));
        run_calibration_button->setText(QCoreApplication::translate("DAB_ui", "Run", nullptr));
        groupBox->setTitle(QString());
        reset_button->setText(QCoreApplication::translate("DAB_ui", "Reset", nullptr));
        label_4->setText(QCoreApplication::translate("DAB_ui", "m:", nullptr));
        label_5->setText(QCoreApplication::translate("DAB_ui", "m:", nullptr));
        label_6->setText(QCoreApplication::translate("DAB_ui", "m:", nullptr));
        label_7->setText(QCoreApplication::translate("DAB_ui", "c:", nullptr));
        label_8->setText(QCoreApplication::translate("DAB_ui", "c:", nullptr));
        label_9->setText(QCoreApplication::translate("DAB_ui", "c:", nullptr));
        label_10->setText(QCoreApplication::translate("DAB_ui", "PROGRAM SETUP", nullptr));
        label_11->setText(QCoreApplication::translate("DAB_ui", "SET SERIAL NUMBER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DAB_ui: public Ui_DAB_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAB_UI_H
