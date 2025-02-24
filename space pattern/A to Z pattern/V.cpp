#include <iostream>
using namespace std;

int printV() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((j == 0 || j == 4) && i < 4 || (i == 4 && (j == 2)))
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
*       *
  *   *
    *