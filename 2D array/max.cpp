#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int arr[rows][cols];
    int max; 
 
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
            if (i == 0 && j == 0)  
                max = arr[i][j];
            else if (arr[i][j] > max) 
                max = arr[i][j];
        }
    }

    cout << "Maximum element: " << max << endl;
    return 0;
}

output:
Enter number of rows and columns: 2 3
Enter elements of the array:
5 8 3
9 2 7
Maximum element: 9

