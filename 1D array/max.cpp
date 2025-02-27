#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 45, 67, 89, 23, 56};
    int max = arr[0]; 

    for (int i = 1; i < 7; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Maximum element: " << max << endl;
    return 0;
}


output:
Maximum element: 89
