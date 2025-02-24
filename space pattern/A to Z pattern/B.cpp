#include <iostream>
using namespace std;


int  printB() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (j == 0 || (j == 3 && (i != 0 && i != 2 && i != 4)) || (i == 0 || i == 2 || i == 4) && j < 3)
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
* * *
*     *
*     *
* * *
*     *
*     *
* * *