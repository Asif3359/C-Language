#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char X;
    cin >> X;

    if (X >= '0' && X <= '9')
    {
        cout << "IS DIGIT" << endl;
    }
    if (X >= 'A' && X <= 'Z')
    {
        cout << "ALPHA\nIS CAPITAL" << endl;
    }
    if (X >= 'a' && X <= 'z')
    {
        cout << "ALPHA\nIS SMALL" << endl;
    }

    return 0;
}
