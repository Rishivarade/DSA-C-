#include <iostream>
using namespace std;

//53, 53, 40, 40, 27, 27, ... 

int main() {
 
    int number = 53; 
    int decre= 13;

    for (int i = 2; i <= 8; i++) {
        if (i % 2 == 1) { 
            number -= decre;
        }
    }

    cout << "num : " << number << endl;
    return 0;
}

output:
// num: 14 14