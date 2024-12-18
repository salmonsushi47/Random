#include <iostream>
using namespace std;

unsigned long long int facto(int param)
{
    unsigned long long int prod = 1;
    for (size_t i = 2; i <= param; i++)
    {
        prod *= i;
    }
    return prod;
}

int main()
{
    cout << facto(4) << endl;
    return 0;
}