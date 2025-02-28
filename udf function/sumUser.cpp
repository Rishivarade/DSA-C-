#include <iostream>
using namespace std;

int Sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Sum of numbers from 1 to " << number << " is: " << Sum(number) << endl;
    return 0;
}

output:
Enter a number: 5
Sum of numbers from 1 to 5 is: 15

