#include <iostream>

using namespace std;

int main() {
    int n, sum = 0, average;

    while(true) {
        cout << "Enter a sum >> ";
        cin >> sum;
        cout << "Enter a number of people >> ";
        cin >> n;

        try {
            if (n <= 0) {
                throw n;
            } else {
                average = sum / n;
            }
        }
        catch (int x) {
            cout << "Error!!" << x << " is not a valid number of people." << endl;
            average = 0;
            cout << endl;
            continue;
        }

        cout << "The average is " << average << endl;
    }
}