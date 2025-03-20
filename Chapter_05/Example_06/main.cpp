#include <iostream>

using namespace std;

int main()
{
    cout << "Count of input numbers? ";
    int n;
    cin >> n;
    if(n <= 0) return 0;

    int *p = new int[n];
    if(!p){
        cout << "Can't allocate the memory"; return 0;
    }

    for(int i = 0; i < n; i++){
        cout << i + 1 <<"'s number: ";
        cin >> p[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += p[i];
    }
    cout << "avg = " << sum / n << endl;

    return 0;
}
