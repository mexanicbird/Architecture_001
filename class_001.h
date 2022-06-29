#ifndef CLASS_001_H
#define CLASS_001_H
#include <mainwindow.h>

class Class_001
{
protected:
    int16_t integerData = 0;
public:
    Class_001();
    int getData();
    void setData(int _integerData);
    ~Class_001() = default;
};

#endif // CLASS_001_H

