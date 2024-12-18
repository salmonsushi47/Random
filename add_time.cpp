#include <iostream>
using namespace std;
int main()
{
    unsigned int h1, h2;
    unsigned short int m1, m2, s1, s2;
    cout << "\nHours space Minutes space Seconds: ";
    cin >> h1 >> m1 >> s1;
    cout << "\nHours space Minutes space Seconds: ";
    cin >> h2 >> m2 >> s2;
    unsigned short int seconds = s1 + s2;
    unsigned short int minutes = m1 + m2 + seconds / 60;
    seconds %= 60;
    unsigned int hours = h1 + h2 + minutes / 60;
    minutes %= 60;
    cout
        << "\nTotal is " << hours << ':' << minutes << ':' << seconds << endl;
    return 0;
}