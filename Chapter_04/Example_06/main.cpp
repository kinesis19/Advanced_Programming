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
    cout << "Radius is " << radius << " create circle" << endl;
}

Circle::Circle(int r){
    radius = r;
    cout << "Radius is " << radius << " create circle" << endl;
}

Circle::~Circle(){
    cout << "Radius is " << radius << " delete circle" << endl;
}

double Circle::getArea(){
    return 3.14 * radius * radius;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f(){
    Circle fDonut(100);
    Circle fPizza(200);
}

int main()
{
    Circle mainDonut;
    Circle mainPizza(30);
    f();
    Circle test(50);

    return 0;
}
