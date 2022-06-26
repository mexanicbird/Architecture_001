#ifndef VARIABLES_H
#define VARIABLES_H

#include "mainwindow.h"


/*******************************Strucrures***************************/
struct BoolData
{
    QVector<int> integer;
    QVector<bool> bit0;
    QVector<bool> bit1;
    QVector<bool> bit2;
    QVector<bool> bit3;
    QVector<bool> bit4;
    QVector<bool> bit5;
    QVector<bool> bit6;
    QVector<bool> bit7;
};

extern BoolData BOOLEAN;
extern QVector<double> INTEGER;

#endif // VARIABLES_H
