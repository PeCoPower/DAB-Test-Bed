#ifndef RESOURCESMANAGER_H
#define RESOURCESMANAGER_H

#include <QWidget>
#include <QFile>
#include <QTextStream>
#include <QDesktopServices>
#include <QUrl>

class ResourcesManager : public QWidget
{
    Q_OBJECT
public:
    explicit ResourcesManager(QWidget *parent = nullptr);
    bool uploadProgram();
    bool establishConnection();
    QString& insertAndReadStoredSerialNumber(QString&);


private:
    QString storedSerialNumber;
    QString dabFlashingProgram;
signals:

};

#endif // RESOURCESMANAGER_H
