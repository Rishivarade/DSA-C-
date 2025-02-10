#include <iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next;

    cout << "Enter the number n: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    int count = 0;
    while (count < n) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;

        count++;
    }

    return 0;
}

// output:-
// Enter the number n: 10
// Fibonacci Series: 0 1 1 2 3 5 8 13 21 34

