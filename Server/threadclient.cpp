#include "threadclient.h"

ThreadClient::ThreadClient()
{

}

ThreadClient::ThreadClient(QString name)
{
    _name = name;
}


void ThreadClient::run()
{

    while(1)
    {
        std::cout<<_name.toStdString()<<std::endl;
    }
}
