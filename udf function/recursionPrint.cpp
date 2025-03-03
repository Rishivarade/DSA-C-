#include <iostream>
using namespace std;

//to print 1 to n
void print1ToN(int n, int current = 1) {
    if (current > n) return;
    cout << current << " ";
    print1ToN(n, current + 1);
}

//to print n to 1
void printNTo1(int n) {
    if (n < 1) return;
    cout << n << " ";
    printNTo1(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Print 1 to " << n << ": ";
    print1ToN(n);
    cout << endl;

    cout << "Print " << n << " to 1: ";
    printNTo1(n);
    cout << endl;

    return 0;
}


outpur:

Enter a number: 5
Printing 1 to 5: 1 2 3 4 5 
Printing 5 to 1: 5 4 3 2 1 
