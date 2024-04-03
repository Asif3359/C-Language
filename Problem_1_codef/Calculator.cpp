#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long A, B;
    char Ch;
    cin >> A >> Ch >> B;
    long long result;
    if (Ch == '+')
    {
        result = A + B;
    }
    if (Ch == '-')
    {
        result = A - B;
    }
    if (Ch == '*')
    {
        result = A * B;
    }
    if (Ch == '/')
    {
        result = A / B;
    }

    cout << result << endl;

    return 0;
}
