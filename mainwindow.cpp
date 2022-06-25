#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    INTEGER.append(MASKBIT_03);
    function_01();
    function_02();
}

MainWindow::~MainWindow()
{
    delete ui;
    for (int i = 0; i < INTEGER.size(); i++) {
        qDebug() << "<<< INTEGER[" << i << "] = " << INTEGER[i];
    }
}

