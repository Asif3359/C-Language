#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char X;
    cin >> X;

    if (X >= 'A' && X <= 'Z')
    {
        char result = X + 32;
        cout << result << endl;
    }
    if (X >= 'a' && X <= 'z')
    {
        char result = X - 32;
        cout << result << endl;
    }

    return 0;
}
