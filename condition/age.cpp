// Q.1
// WAP TO CHECK THE VOTING ELIGIBILITY OF USER

#include <iostream>
using namespace std;



int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 1 || age > 100) {
        cout << "Please enter a valid age between 1 and 100." << endl;
    }
    else if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } 
    else if (age < 18){
        cout << "You are not eligible";
    }
    else {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}

//  output:- 
//  Enter your age: 25
//  You are eligible to vote.