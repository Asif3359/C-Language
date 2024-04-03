#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    long long X, Y, Z;
    char ch, Si;
    cin >> X >> ch >> Y >> Si >> Z;
    long long Result;

    if (ch == '+')
    {
        if ((X + Y) == Z)
        {
            cout << "Yes" << endl;
        }
        else
        {
            Result = X + Y;
            cout << Result << endl;
        }
    }
    else if (ch == '-')
    {
        if ((X - Y) == Z)
        {
            cout << "Yes" << endl;
        }
        else
        {
            Result = X - Y;
            cout << Result << endl;
        }
    }
    else if (ch == '*')
    {
        if ((X * Y) == Z)
        {
            cout << "Yes" << endl;
        }
        else
        {

            Result = X * Y;
            cout << Result << endl;
        }
    }

    return 0;
}
