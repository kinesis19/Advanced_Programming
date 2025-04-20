#include "box.h"
#include <iostream>

using namespace std;

Box Box::operator+(const Box& op)
{
    Box tmp;
    tmp.length = length + op.length;
    tmp.width = width + op.width;
    tmp.height = height + op.height;

    return tmp;
}

bool Box::operator==(const Box& op)
{
    return (this->length * this->width * this->height) == (op.length * op.width * op.height);
}

// printBox() 메서드
void printBox(Box& b)
{
    cout << "Box Length: " << b.length << endl;
    cout << "Box Width: " << b.width << endl;
    cout << "Box Height: " << b.height << endl;
    cout << "Box Volume: " << b.getVolume() << endl;
}

Box::~Box(){}
