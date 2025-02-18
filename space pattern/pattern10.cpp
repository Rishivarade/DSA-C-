#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << "  ";
        }
        char ch = 'A';
        for (int k = 1; k <= i; k++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}


//         A  
//       A B  
//     A B C  
//   A B C D  
// A B C D E  
