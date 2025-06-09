#include <iostream>

using namespace std;

int getExp(int base, int exp) {
    if (base < 0 || exp < 0) {
        throw "Base and exponent must be non-negative.";
    }
    int value = 1;
    for (int i = 0; i < exp; i++) {
        value = value * base;
    }

    return value;
}


int main() {
    int v = 0;
    try {
        v = getExp(2, 3);
        cout << "2^3 = " << v << endl;

        v = getExp(-2, 3);
        cout << "-2^3 = " << v << endl;
    } catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }
}