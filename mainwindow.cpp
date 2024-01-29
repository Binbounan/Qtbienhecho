#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),

    neurona1(1, 3.5, 10, 20, 255, 0, 0),
    neurona2(2, 2.8, 15, 25, 0, 255, 0)
{
    ui->setupUi(this);

    administN.agregarInicio(neurona1);
    administN.agregarFinal(neurona2);

    administN.mostrar();
}

MainWindow::~MainWindow()
{
    delete ui;
}
