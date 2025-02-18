#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << "  ";
        }
        char ch = 'A' + i - 1;
        for (int k = 1; k <= i; k++) {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
    return 0;
}


//         A     
//       B A  
//     C B A  
//   D C B A  
// E D C B A  
