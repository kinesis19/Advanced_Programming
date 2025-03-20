#include <iostream>

using namespace std;

class Rectangle{
private:
    int width;
    int height;
public:
    Rectangle();
    Rectangle(int num1, int num2);
    Rectangle(int num1);

    bool isSquare();
};

Rectangle::Rectangle(){
    width = height = 1;
}

Rectangle::Rectangle(int num1, int num2){
    width = num1;
    height = num2;
}

Rectangle::Rectangle(int num1){
    width = height = num1;
}

bool Rectangle::isSquare(){
    if(width == height) return true;
    else return false;
}

int main()
{
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);

    if(rect1.isSquare()) cout << "rect1 is a square" << endl;
    if(rect2.isSquare()) cout << "rect2 is a square" << endl;
    if(rect3.isSquare()) cout << "rect3 is a square" << endl;

    return 0;
}
