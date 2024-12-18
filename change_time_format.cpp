#include <iostream>
using namespace std;
int main()
{
    short int hours, minutes;
    cout << "\nInput time in 24 hour format Hours space Minutes : ";
    cin >> hours >> minutes;

    try
    {
        if ((0 <= hours && 24 >= hours) || (0 <= minutes && 60 > minutes))
        {
            if (hours <= 12)
            {
                if (hours == 12)
                {
                    cout << 12 << ":" << minutes << " PM" << endl;
                }
                else
                {
                    cout << hours << ":" << minutes << " AM" << endl;
                }
            }
            else
            {
                if (hours == 24)
                {
                    cout << 12 << ":" << minutes << " AM" << endl;
                }
                else
                {
                    cout << hours - 12 << ":" << minutes << " PM" << endl;
                }
            }
        }
        else
        {
            throw invalid_argument("Invalid Time");
        }
    }
    catch (const invalid_argument &exception_ref)
    {
        std::cerr << "Exception thrown:" << exception_ref.what() << "\n";
    }
    return 0;
}