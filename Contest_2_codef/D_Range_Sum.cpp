#include <iostream>
using namespace std;

long long sumInRange(long long L, long long R)
{
    // Sum of an arithmetic series: S = n/2 * (first term + last term)
    return (R - L + 1) * (L + R) / 2;
}
long long max(long long L, long long R)
{
    if (L > R)
    {
        return L;
    }
    else
    {
        return R;
    }
}
long long min(long long L, long long R)
{
    if (L < R)
    {
        return L;
    }
    else
    {
        return R;
    }
}

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i)
    {
        long long L, R;
        cin >> L >> R;
        long long mx, mn;
        mx = max(L, R);
        mn = min(L, R);
        cout << sumInRange(mn, mx) << endl;
    }

    return 0;
}
