#include <iostream>
using namespace std;

int printY() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i == j && i < 3) || (i + j == 4 && i < 3) || (j == 2 && i > 2))
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
  *   *
   * *
    *
    *
    *
    *