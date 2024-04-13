#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long a = 0;
    long long b = 1;

    long long fibo = 0;

    if (n == 1)
    {
        cout << a << endl;
        return 0;
    }
    else if (n == 2)
    {
        cout << b << endl;
        return 0;
    }

    for (int i = 3; i <= n; i++)
    {
        fibo = a + b;
        a = b;
        b = fibo;
    }

    cout << fibo << endl;

    return 0;
}
