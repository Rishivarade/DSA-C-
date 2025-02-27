#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int arr[n][n], Sum = 0;

    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (i + j == n - 1)
                Sum += arr[i][j];
        }

        cout << "Anti-Diagonal Sum: " << Sum << endl;
        return 0;
    }
}


output:
Enter size of square matrix: 3
Enter matrix elements:
1 2 3
4 5 6
7 8 9
Anti-Diagonal Sum: 15
