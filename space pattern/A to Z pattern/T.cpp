#include <iostream>
using namespace std;

int printT() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0 || j == 2)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}


output:
* * * * *
    *
    *
    *
    *
    *
    *