#include <iostream>
using namespace std;


int printE() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (j == 0 || i == 0 || i == 2 || i == 4)
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
* * * *
*
*
* * * *
*
*
* * * *