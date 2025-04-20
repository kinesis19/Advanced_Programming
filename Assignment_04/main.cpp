#include <iostream>
#include "box.h"

using namespace std;

int main()
{
    Box a(10, 10, 10), b(10, 10, 10), c;
    c = a + b;

    cout << (a == b) << endl;
    printBox(a);
}
