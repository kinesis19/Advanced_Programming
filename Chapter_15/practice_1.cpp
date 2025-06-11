#include <iostream>
using namespace std;

int main() {

    double pi = 3.14;

    auto calc = [pi](double r) -> double {
        return pi * r * r;
    };

    cout << "Area: " << calc(3) << endl;

    return 0;
}