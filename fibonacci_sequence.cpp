#include <iostream>
using namespace std;
int main()
{
    short int n;
    cout << "Max index: ";
    cin >> n;

    long double fib = 1, fibP = 1, store;
    cout << fibP << endl;
    for (size_t i = 1; i <= n; i++)
    {
        cout << "\n"
             << i << ':' << fib;
        store = fib;
        fib += fibP;
        fibP = store;
    }
    return 0;
}