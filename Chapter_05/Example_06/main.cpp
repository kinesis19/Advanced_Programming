#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

class Circle {
    string _stName;
    int _nRadius;
public:

    Circle(int radius, string name) {
        _nRadius = radius;
        _stName = name;
    }

    double Area() {
        return 3.14 * _nRadius * _nRadius;
    }

    string Name() {
        return _stName;
    }
};

int main() {
    vector<Circle> circles;

    int select, radius;
    string name;

    while (1) {
        cout << "[1: Create] [2: Delete] [3: List] [4: Exit]: ";
        cin >> select;

        if (select == 1) {
            cout << "Enter a radius and name of Circle: ";
            cin >> radius >> name;
            circles.push_back(Circle(radius, name));
        } else if (select == 2) {
            cout << "Enter the name of Circle to delete: ";
            cin >> name;

            for (auto it = circles.begin(); it != circles.end();) {
                if (it->Name() == name) {
                    it = circles.erase(it);
                } else {
                    it++;
                }
            }
        } else if (select == 3) {
            for (auto it = circles.begin(); it != circles.end(); it++) {
                cout << it->Name() << "(" << sqrt(it->Area() / 3.14) << ")" << endl;
            }
        } else if (select == 4) {
            break;
        }
        cout << endl;
    }

    return 0;
}
