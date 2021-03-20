#ifndef THREADCLIENT_H
#define THREADCLIENT_H

#include <QtCore>
#include <iostream>
#include "QTcpSocket"
#include <QHostAddress>

class ThreadClient: public QThread
{
    Q_OBJECT
public:
    ThreadClient();
    ThreadClient(QString name);
    QTcpSocket * getSocket();

protected:
    void run() override;
private:
    QString _name = "Undefined Behaviour";
    uint16_t index = 0;
    QTcpSocket *tcpSocket = nullptr;

};

#endif // THREADCLIENT_H
