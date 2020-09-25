#ifndef DAB_UI_H
#define DAB_UI_H

#include <QWidget>
#include <QFile>
#include "resourcesmanager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class DAB_ui; }
QT_END_NAMESPACE

class DAB_ui : public QWidget
{
    Q_OBJECT

public:
    DAB_ui(QWidget *parent = nullptr);
    ~DAB_ui();

private slots:
    void on_uploadButton_clicked();

    void on_trans_Button_clicked();

    void on_set_sn_button_clicked();

private:
    Ui::DAB_ui *ui;
    ResourcesManager resourceMan;
    QFile* serialFile_;
};
#endif // DAB_UI_H
