// Q.4
// WAP TO PRINT GRADES OF STUDENT BASED ON THEIR PERCENTAGE. 

#include <iostream>
using namespace std;

int main() {

    float percentage;

   
    cout << "Enter your percentage: ";
    cin >> percentage;

   
    if (percentage >= 90) {
        cout << "Grade: A+" << endl;
    } 
    else if (percentage >= 80) {
        cout << "Grade: A" << endl;
    } 
    else if (percentage >= 70) {
        cout << "Grade: B" << endl;
    } 
    else if (percentage >= 60) {
        cout << "Grade: C" << endl;
    } 
    else if (percentage >= 50) {
        cout << "Grade: D" << endl;
    } 
    else if (percentage >= 35) {
        cout << "Grade: E" << endl;
    } 
    else {
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}

// output:- 
// Enter your percentage: 54.12
// Grade: D
