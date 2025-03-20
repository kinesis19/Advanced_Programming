#include <iostream>

using namespace std;

class Circle{
public:
    int radius;

    Circle();
    Circle(int r);
    ~Circle();
    double getArea();
};

Circle::Circle(){
    radius = 1;
    cout << "Radius is " << radius << " and create circle" << endl;
}

Circle::Circle(int r){
    radius = r;
    cout << "Radius is " << radius << " and create circle" << endl;
}

Circle::~Circle(){
    cout << "Radius is " << radius << " and delete circle" << endl;
}

double Circle::getArea(){
    return 3.14 * radius * radius;
}

int main()
{
    Circle donut;
    Circle pizza(30);

    return 0;
}
