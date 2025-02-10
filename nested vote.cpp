#include <iostream>

using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 0) {
        if (age >= 18) { 
            cout << "You are eligible to vote!" << endl;

            if (age >= 60){
               // if senior citizen
                cout << "You are considered a senior citizen." << endl;
            } else {
                cout << "You are an adult voter." << endl;
            }
        } else { 
          // If under 18
            cout << "You are not eligible to vote." << endl;

            if (age >= 13) {  
              //if teenager
                cout << "You are a teenager." << endl;
            } else {  
              // Children
                cout << "You are a child." << endl;
            }
        }
    } else {  
      //Invalid age
        cout << "Invalid age entered!" << endl;
    }

    return 0;
}
