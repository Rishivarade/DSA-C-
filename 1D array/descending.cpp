#include <iostream>
using namespace std;

int main() {
    int arr[] = {45, 12, 89, 23, 67, 56};
    int n = 6; // Size of the array

    // Bubble Sort for Descending Order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { 
                // Swap elements if out of order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    cout << "Array in Descending Order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


output:
Array in Descending Order: 89 67 56 45 23 12
