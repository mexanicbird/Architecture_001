#include <class_001.h>

Class_001::Class_001()
{
}

void Class_001::setData(int _integerData) {
    integerData =_integerData;
}

int Class_001::getData() {
    return integerData;
}


//class Class_001
//{
//protected:
//    int16_t integerData;
//public:
//    Class_001();
//    int getData();
//    void setData();
//    ~Class_001() = default;
//};


//void ConvertToBinary::getBooleanData(){
//    int  temp = 0;
//    int  bitMask = 32768;
//    std::cout << "Двоичное представление: " << std::endl;
//    std::cout << "0b";
//    for (int i = 0; i < 16; i++) {
//        temp = integerData & bitMask;
//        if (temp != 0) {
//            booleanData[i] = 1;
//            std::cout << booleanData[i];
//        } else {
//            booleanData[i] = 0;
//            std::cout << booleanData[i];
//        }
//        bitMask = bitMask >> 1;
//    }
//    std::cout << std::endl << std::endl;
//}

//ConvertToSCIB c1(userData);
//c1.getBooleanData();
//c1.printData();
//c1.clear();
