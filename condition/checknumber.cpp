// Q.3
// WAP TO CHECK NUMBER IS NEGATIVE, POSITIVE, OR NEUTRAL.

#include <iostream>
using namespace std;


int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

   
    if (num > 0) {
        cout << num << " is a positive number." << endl;
    } else if (num < 0) {
        cout << num << " is a negative number." << endl;
    } else {
        cout << "The number is neutral (zero)." << endl;
    }

    return 0;
}

// output:-
// Enter a number: 10
// 10 is a positive number.