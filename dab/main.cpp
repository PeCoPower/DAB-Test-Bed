#include <QApplication>
#include "dab_ui.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DAB_ui w;
    w.show();
    return a.exec();
}
