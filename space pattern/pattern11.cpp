#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }
        char ch = 'A';
        for (int k = 0; k < (n - i); k++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}


// A B C D E  
//   A B C D  
//     A B C  
//       A B  
//         A  
