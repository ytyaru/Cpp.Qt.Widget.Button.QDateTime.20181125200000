#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QDateTime>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QDateTime dateTime = QDateTime::currentDateTime();
    QString timestamp = dateTime.date().toString("yyyy-MM-dd") + dateTime.time().toString(" HH:mm:ss");
    qDebug()<<timestamp;
    ui->textEdit->append(timestamp);
}
