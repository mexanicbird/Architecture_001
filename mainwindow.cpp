#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    INTEGER.append(MASKBIT_03);
    Class_001 c1;
    Class_002 c2;
    c1.setData(11);
    c2.setData(22);
    function_01(c1.getData());
    function_02(c2.getData());
    function_03(BOOLEAN);
}

MainWindow::~MainWindow()
{
    delete ui;
    for (int i = 0; i < INTEGER.size(); i++) {
        qDebug() << "<<< INTEGER[" << i << "] = " << INTEGER[i];
    }
}

