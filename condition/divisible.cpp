// Q.2
// WAP TO CHECK GIVEN NUMBER IS DIVISIBLE BY 7 OR NOT.

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    
    if (num % 7 == 0) {
        cout << num << " is divisible by 7." << endl;
    } else {
        cout << num << " is not divisible by 7." << endl;
    }

    return 0;
}

// output:- 
// Enter a number: 14
// 14 is divisible by 7.