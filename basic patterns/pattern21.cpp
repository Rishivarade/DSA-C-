#include <iostream>
using namespace std;

int main() {
    int n = 5; // Change this value for a different pattern size

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << (j % 2 == 0 ? "| " : "- ");
        }
        cout << endl;
    }

    return 0;
}



// -  
// | -  
// - | -  
// | - | -  
// - | - | -  
