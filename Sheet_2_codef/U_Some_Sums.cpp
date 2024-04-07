#include <iostream>

using namespace std;

bool isValid(int i, int A, int B)
{
    int sum = 0;
    while (i > 0)
    {
        int digit = i % 10;
        sum = sum + digit;
        i = i / 10;
    }
    if (sum >= A && sum <= B)
    {
        return true;
    }
    return false;
}
int max(int A, int B)
{
    if (A > B)
    {
        return A;
    }
    else if (B > A)
    {
        return B;
    }
    else
    {
        return A;
    }
}
int min(int A, int B)
{
    if (A > B)
    {
        return B;
    }
    else if (B > A)
    {
        return A;
    }
    else
    {
        return A;
    }
}

int main(int argc, char const *argv[])
{
    int N, A, B;
    cin >> N >> A >> B;

    int sum = 0;
    int mx = max(A, B);
    int mn = min(A, B);
    for (int i = 1; i <= N; i++)
    {
        if (isValid(i, mn, mx))
        {
            sum = sum + i;
        }
    }

    cout << sum << endl;

    return 0;
}
