#include <iostream>
using namespace std;

// 7, 10, 8, 11, 9, 12, ... 

int main() { 
    int odd = 7, even = 10;
    int result;

    for (int i = 1; i <= 7; i++) {
        if (i % 2 == 1) {  // Odd index terms
            result = odd;
            odd++;
        } else {  // Even index terms
            result = even;
            even++;
        }
    }

    cout << "num : " << result << endl;
    return 0;
}

// output:
// num: 10

