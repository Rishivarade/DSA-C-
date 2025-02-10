#include <iostream>
using namespace std;

int main()
{
    int year = 2000;

    cout << "Leap years between 2000 and 3000:";

    while (year <= 3000)
    {
        cout << year << " ";
        year+4;
    }

    return 0;
}

// output:
// Leap years between 2000 and 3000:
// 2000 2004 2008 2012 2016 2020 2024 2028 2032 ... 2996 3000

