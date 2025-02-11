#include <iostream>
using namespace std;

//36, 34, 30, 28, 24, ... 

int main() {
    int number = 36;

    for (int i = 1; i < 6; i++) {
        if (i % 2 == 1) {
            number -= 2; 
        } else {
            number -= 4;
        }
    }

    cout << "num: " << number << endl;
    return 0;
}


// output: 
// num : 22