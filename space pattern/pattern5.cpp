#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            cout << "  ";
        }
        for (int k = i; k <= n; k++) {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}


// 1 2 3 4 5  
//   2 3 4 5  
//     3 4 5  
//       4 5  
//         5  

