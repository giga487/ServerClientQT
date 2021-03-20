#ifndef THREADSERVER_H
#define THREADSERVER_H

#include <QtCore>
#include <iostream>
#include "QTcpSocket"
#include "QTcpServer"


class MyThread : public QThread
{
    Q_OBJECT
public:
    MyThread(qintptr ID, QObject *parent = 0);

    void run();

signals:
    void error(QTcpSocket::SocketError socketerror);

public slots:
    void readyRead();
    void disconnected();

private:
    QTcpSocket *socket;
    qintptr socketDescriptor;
};


#endif // THREADSERVER_H
