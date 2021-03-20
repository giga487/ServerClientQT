#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "threadclient.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ThreadClient *Client = new ThreadClient("Gigino");
    Client->start();

}

void MainWindow::onReadyRead()
{
    QByteArray datas = getSocket()->readAll();
    qDebug() << datas;
}
