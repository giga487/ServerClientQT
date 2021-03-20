#include "threadclient.h"

ThreadClient::ThreadClient()
{

}

QTcpSocket * ThreadClient::getSocket()
{
    return tcpSocket;
}

ThreadClient::ThreadClient(QString name)
{
    _name = name;

    tcpSocket = new QTcpSocket();
    tcpSocket->connectToHost(QHostAddress("127.0.0.1"), 4242);

    connect(tcpSocket, SIGNAL(readyRead()), );

}


void ThreadClient::run()
{

    while(1)
    {
        std::cout<<_name.toStdString()<<std::endl;
    }
}
