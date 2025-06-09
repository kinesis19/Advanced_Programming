#include <iostream>
using namespace std;

int sum(int a, int b) {
    int sum = 0;
    if (a > b || (a < 0 || b < 0)) {
        throw "Exception raised !";
    } else {
        for(int i = a; i <= b; i++) {
            sum = sum + i;
        }
    }

    return sum;
}


int main() {
    try {
        cout << sum(2, 5) << endl;
        cout << sum(-1, 5) << endl;
        cout << sum(7, 3) << endl;
    }
    catch(const char* s) {
        cout << s << endl;
    }
    return 0;
}