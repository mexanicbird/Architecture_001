#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <sstream>
#include <vector>
#include <QVector>
#include <QFileDialog>
#include <QDebug>
#include <variables.h>
#include <constants.h>
#include <funcblock_001.h>
#include <funcblock_002.h>
#include <funcblock_003.h>
#include <class_001.h>
#include <class_002.h>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
