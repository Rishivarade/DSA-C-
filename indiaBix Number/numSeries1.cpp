#include <iostream>
using namespace std;

//2, 1, (1/2), (1/4), ... 

int main() {
    int first = 2; 
    int last= 1;        

    for (int i = 1; i < 5; i++) {
        first = first / 2; 
        last = last * 2;
    }

    cout << "Num : " << first << "/" << last << endl;
    return 0;
}


// output:
// Num :  1/8
