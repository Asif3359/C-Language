#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    long long int X, Y, K;
    cin >> X >> Y >> K;

    if ((X % K == 0) && (Y % K == 0))
    {
        cout << "Both" << endl;
    }
    if ((X % K == 0) && (Y % K != 0))
    {
        cout << "Memo" << endl;
    }
    if ((X % K != 0) && (Y % K == 0))
    {
        cout << "Momo" << endl;
    }
    if ((X % K != 0) && (Y % K != 0))
    {
        cout << "No One" << endl;
    }

    return 0;
}
