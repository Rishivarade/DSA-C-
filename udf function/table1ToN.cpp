#include <iostream>
using namespace std;

void printTables(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 10; j++)
            cout << i << " x " << j << " = " << i * j << endl;
        cout << endl;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    printTables(num);
    return 0;
}

output:
Enter a number: 2
1 x 1 = 1
1 x 2 = 2
...
1 x 10 = 10

2 x 1 = 2
2 x 2 = 4
...
2 x 10 = 20

