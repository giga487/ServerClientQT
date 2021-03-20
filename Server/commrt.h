#ifndef COMMRT_H
#define COMMRT_H

#include <QTcpSocket>
#include <QTcpServer>
#include "threadserver.h"

#define PORT_DEFAULT 1234

class MyServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit MyServer(QObject *parent = 0);
    explicit MyServer(int port);
    void startServer();
signals:

public slots:

protected:
    void incomingConnection(qintptr socketDescriptor);
private:
    int port = PORT_DEFAULT;

};




#endif // COMMRT_H
