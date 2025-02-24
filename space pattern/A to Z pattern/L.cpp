#include <iostream>
using namespace std;

void printL() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (j == 0 || i == 4)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;
}

output:
*
*
*
*
*
*
* * * *