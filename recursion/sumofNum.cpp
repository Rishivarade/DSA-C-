#include <iostream>
using namespace std;

int sumRecursive(int n) {
    if (n == 0)  
        return 0;  
    return n + sumRecursive(n - 1);  
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum from 1 to " << n << " is " << sumRecursive(n) << endl;
    return 0;
}


output:

Sum from 1 to 5 is 15
