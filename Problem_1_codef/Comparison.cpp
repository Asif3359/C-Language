#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    long long X, Y;
    char ch;
    cin >> X >> ch >> Y;

    if (ch == '>')
    {
        if (X > Y)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else if (ch == '<')
    {
        if (X < Y)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else if (ch == '=')
    {
        if (X == Y)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }

    return 0;
}
