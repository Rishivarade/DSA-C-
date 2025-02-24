#include <iostream>
using namespace std;

int printX() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j || i + j == 4)
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
 *     *
  *   *
    *
  *   *
 *     *
*       *