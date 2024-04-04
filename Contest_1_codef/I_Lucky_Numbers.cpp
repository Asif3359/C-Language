#include <iostream>

using namespace std;

int main()
{
    int A;
    cin >> A;

    int f1 = A % 10;
    int f2 = A % 100 / 10;

    if ((f1 % f2) == 0 || (f2 % f1) == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
