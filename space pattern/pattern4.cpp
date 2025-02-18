#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }
        for (int k = 1; k <= (n - i); k++) {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}

// 1 2 3 4 5  
//   1 2 3 4  
//     1 2 3  
//       1 2  
//         1  

