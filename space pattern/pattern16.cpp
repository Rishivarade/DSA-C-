#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }
        for (int k = 0; k < (n - i); k++) {
            cout << ((i + k) % 2) << " ";
        }
        cout << endl;
    }
    return 0;
}


// 1  0  1  0  1  
//    0  1  0  1  
//       1  0  1  
//          0  1  
//             1  
