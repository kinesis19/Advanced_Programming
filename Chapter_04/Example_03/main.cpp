#include <iostream>

using namespace std;

class Circle{
public:
    int radius;
    Circle();
    Circle(int r);
    double getArea();
};

Circle::Circle(){
    radius = 1;
    cout << "Radius " << radius << " circle areated" << endl;
}

Circle::Circle(int r){
    radius = r;
    cout << "Radius " << radius << " circle areated" << endl;
}

double Circle::getArea(){
    return 3.14 * radius * radius;
}

int main()
{
    Circle donut;
    double area = donut.getArea();
    cout << "Donut area is " << area << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "Pizza area is " << area << endl;

    return 0;
}
