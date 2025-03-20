#include <iostream>

using namespace std;

class Circle{
public:
    int radius;
    double getArea();
};

double Circle::getArea(){
    return 3.14 * radius * radius;
}

int main()
{
    Circle donut;
    donut.radius = 1;
    double area = donut.getArea();
    cout << "Area of Donut is " << area << endl;

    Circle pizza;
    pizza.radius = 30;
    area = pizza.getArea();
    cout << "Area of Pizza is " << area << endl;

    return 0;
}
