#include <iostream>
using namespace std;
bool isLeapYear(unsigned short int year)
{
    if (year % 100 == 0)
    {
        return year % 400 == 0;
    }
    else
    {
        return year % 4 == 0;
    }
}
int main()
{
    cout << isLeapYear(1976) << "\n";
    return 0;
}
