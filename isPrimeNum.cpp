#include <iostream>
using namespace std;
bool isPrimeNum(unsigned long long int param)
{
    for (size_t i = 2; i <= param / 2; ++i)
    {
        if (param % i == 0)
            return false;
    }
    return true;
}
int main()
{
    cout << isPrimeNum(5);
    return 0;
}