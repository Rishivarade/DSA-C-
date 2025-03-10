#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int id;
    float salary;

    void setEmployee(string n, int i, float s) {
        name = n;
        id = i;
        salary = s;
    }

    void displayEmployee() {
        cout << "Employee ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee e1, e2, e3;

    e1.setEmployee("Rohit", 101, 50000);
    e2.setEmployee("Rishi", 102, 60000);
    e3.setEmployee("Prathmesh", 103, 55000);

    cout << "Employee Details:"<<endl;
    e1.displayEmployee();
    e2.displayEmployee();
    e3.displayEmployee();

    return 0;
}


output:
Employee Details:
Employee ID: 101, Name: Rohit, Salary: 50000
Employee ID: 102, Name: Rishi, Salary: 60000
Employee ID: 103, Name: Prathmesh, Salary: 55000
