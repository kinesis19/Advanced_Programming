#ifndef BOX_H
#define BOX_H

class Box
{
    double length, width, height;
    bool isEmpty;

public:

    Box(double w, double l, double h) : length{l}, width{w}, height{h}
    {
        isEmpty = true;
    }

    Box() : length{0}, width{0}, height{0}
    {
        isEmpty = true;
    }

    ~Box();

    friend void printBox(Box& b);

    double getVolume()
    {
        return length * width * height;
    }

    Box operator+ (const Box& op);
    bool operator== (const Box& op);
};
void printBox(Box& b);

#endif
