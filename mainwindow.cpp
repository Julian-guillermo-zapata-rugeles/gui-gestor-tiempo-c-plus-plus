#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mostrarContador(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::mostrarContador(bool mode)
{
    if(mode==true){
        ui->lcd->show();
        ui->lcd_img->show();
    }
    else{
        ui->lcd->hide();
        ui->lcd_img->hide();
    }
}
