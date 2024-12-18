#include <iostream>
using namespace std;
int main()
{
    short int year;
    cout << "year: ";
    cin >> year;
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            cout << "leap year" << endl;
        }
        else
        {
            cout << "not leap year" << endl;
        }
    }
    else if (year % 4 == 0)
    {
        cout << "leap year" << endl;
    }
    else
    {
        cout << "not leap year" << endl;
    }

    return 0;
}