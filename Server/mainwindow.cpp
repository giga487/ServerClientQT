#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "commrt.h"
#include "threadserver.h"
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


void MainWindow::on_pushButtonStartComm_clicked()
{
    //funzione che starta la comunicazione
    //commRT server;
    times_started++;
    MyServer server = MyServer(5068);
    server.startServer();

}
