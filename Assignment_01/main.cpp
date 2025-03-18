#include <iostream>
#include <string>
using namespace std;

class Airplane{
private:
    // Variables of Members
    string _name; // name
    int _capacity; // capacity
    int _speed; // speed

public:
    //
    Airplane(): Airplane("Airbus 350", 400, 1000){ };

    Airplane(string name, int speed, int capacity){
        _name = name;
        _capacity = capacity;
        _speed = speed;
    }

    // Define of prototype
    string getName();
    int getCapacity();
    int getSpeed();
};

// Methods
// 1. get name method
string Airplane::getName() {
    return _name;
}

// 2. get capacity method
int Airplane::getCapacity() {
    return _capacity;
}

// 3. get speed method
int Airplane::getSpeed() {
    return _speed;
}

int main()
{
    Airplane plane("Boeing 787", 300, 900); cout << "Airplane #1" << endl;
    cout << "Airplane Name: " << plane.getName() << endl;
    cout << "Airplane Capacity: " << plane.getCapacity() << endl;
    cout << "Airplane Speed: " << plane.getSpeed() << " Km/h" << endl << endl;

    cout << "Airplane #2" << endl;
    Airplane plane2;
    cout << "Airplane Name: " << plane2.getName() << endl;
    cout << "Airplane Capacity: " << plane2.getCapacity() << endl;
    cout << "Airplane Speed: " << plane2.getSpeed() << " Km/h" << endl << endl;



    return 0;
}
