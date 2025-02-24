#include <iostream>
using namespace std;

int printW() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {
            if (j == 0 || j == 6 || (i == 3 && (j == 2 || j == 4)) || (i == 4 && j == 3))
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
*       *
*       *
*       *
*   *   *
*  * *  *
*       *