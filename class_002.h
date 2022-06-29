#ifndef CLASS_002_H
#define CLASS_002_H
#include <mainwindow.h>

class Class_002
{
protected:
    int16_t integerData = 0;
public:
    Class_002();
    int getData();
    void setData(int _integerData);
    ~Class_002() = default;
};

#endif // CLASS_002_H


