#ifndef THREADCLIENT_H
#define THREADCLIENT_H

#include <QtCore>
#include <iostream>

class ThreadClient: public QThread
{
    Q_OBJECT
public:
    ThreadClient();
    ThreadClient(QString name);
protected:
    void run();
private:
    QString _name = "Undefined Behaviour";
    uint16_t index = 0;
};

#endif // THREADCLIENT_H
