#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int arr[rows][cols];
    int sum = 0, count = 0;
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
            count++;
        }
    }

    float average = (float)sum / count;
    cout << "Average of all elements: " << average << endl;

    return 0;
}

output:

Enter number of rows and columns: 2 2
Enter elements of the array:
10 20
30 40
Average of all elements: 25
