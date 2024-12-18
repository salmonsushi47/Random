#include <iostream>
#include <cmath>
using namespace std;
bool isPalindromeNum(unsigned long long int param)
{
    for (size_t i = 0; i < floor((log10(param) + 1) / 2); ++i)
    {
        if (static_cast<int>(param / pow(10, i)) % 10 != static_cast<int>(param / pow(10, floor(log10(param)) - i)) % 10)
            return false;
    }
    return true;
}
int main()
{
    cout << isPalindromeNum(17255271) << endl;
}

// Multiplying two numbers those consists of only 1's always gives you a palindrome numbers