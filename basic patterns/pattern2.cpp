#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 5; j >= 6 - i; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

// 5
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1
