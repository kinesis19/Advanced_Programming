#include <iostream>

using namespace std;

int main()
{
    int *p;

    p = new int;
    if(!p){
        cout << "Can't allocate the memory" << endl;
        return 0;
    }

    *p = 5;
    int n = *p;

    cout << "*p = " << *p << '\n';
    cout << "n = " << n << '\n';
    return 0;
}
