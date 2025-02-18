#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++) {
            cout << k % 2 << " ";
        }
        cout << endl;
    }
    return 0;
}



//             1  
//          1  0  
//       1  0  1  
//    1  0  1  0  
// 1  0  1  0  1  
