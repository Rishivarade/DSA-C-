#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }
        for (int k = 5; k >= (i + 1); k--) {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}


// 5 4 3 2 1  
//   5 4 3 2  
//     5 4 3  
//       5 4  
//         5  
