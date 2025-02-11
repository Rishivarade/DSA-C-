#include <iostream>
using namespace std;

//22, 21, 23, 22, 24, 23, ...

int main() {
    int number = 22;

    for (int i = 1; i < 7; i++) {
        if (i % 2 == 1) {
            number -= 1;
        } else {
            number += 2;
        }
    }

    cout << "num: " << number << endl;
    return 0;
}



// output:
// num : 25
