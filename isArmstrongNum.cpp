#include <iostream>
#include <cmath>
using namespace std;
bool isArmstrongNum(unsigned long long int param)
{
    unsigned long long int sum = 0;
    for (size_t i = 1; i < param; i *= 10)
    {
        // clog << "Exponentiating " << (param / i) % 10 << " to " << (param == 0 ? 1 : floor(log10(param) + 1)) << endl;
        sum += pow((param / i) % 10, (param == 0 ? 1 : floor(log10(param) + 1)));
    }
    // clog << "Sum of all exponentiated digits " << sum << endl;
    return (sum == param ? true : false);
}
int main()
{
    cout << isArmstrongNum(9474) << endl;
    return 0;
}