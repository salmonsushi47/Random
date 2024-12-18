#include <iostream>
using namespace std;
bool isPerfectNum(unsigned long long int param)
{
    unsigned long long int sum = 0;
    for (size_t i = 1; i < param; i++)
    {
        if (param % i == 0)
        {
            // clog << i << " is a perfect divisor of " << param << endl;
            sum += i;
        }
        // else
        // {
        //     clog << i << " isn't a perfect divisor of " << param << endl;
        // }
    }
    // clog << "Sum of all perfect divisors " << sum << endl;
    return (param == 0 ? false : (sum == param ? true : false));
}
int main()
{
    cout << isPerfectNum(496) << endl;
    return 0;
}