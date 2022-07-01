#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    ui->pushButton->setText("53m , 34m");
}



void MainWindow::on_pushButton_2_clicked()
{
     ui->pushButton_2->setText("53m , 34m");
}


void MainWindow::on_pushButton_3_clicked()
{
      ui->pushButton_3->setText("53m , 34m");
}


void MainWindow::on_pushButton_4_clicked()
{
     ui->pushButton_4->setText("53m , 34m");
}


void MainWindow::on_pushButton_5_clicked()
{
    ui->pushButton_5->setText("I'm Clicked (0,0) arez");
}

