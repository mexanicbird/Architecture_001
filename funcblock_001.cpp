#include <funcblock_001.h>


void function_01(int data){
    int bit01 = MASKBIT_00 + 1;
    INTEGER.append(bit01);
    qDebug() << data;
}
