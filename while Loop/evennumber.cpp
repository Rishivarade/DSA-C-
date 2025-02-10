#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 != 0) {
        n--;
    }

    while (n >= 2) {
        cout << n << " ";
        n -= 2;
    }

    return 0;
}

// output:
// Enter a number: 10
// 10 8 6 4 2
