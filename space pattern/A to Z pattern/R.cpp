#include <iostream>
using namespace std;

int printR() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (j == 0 || (i == 0 || i == 2) && j < 3 || j == 3 && (i < 3) || (i == j && i > 2))
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
*       *
*      *
* * *
*     *
*      *
*       *