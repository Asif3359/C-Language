#include <iostream>

using namespace std;

long long returnCount(long long num)
{
    long long count = 0;

    while (num > 0)
    {
        if (num % 2 == 0)
        {
            num = num / 2;
            count++;
        }
        else
        {
            break;
        }
    }

    return count;
}

int main(int argc, char const *argv[])
{
    long long  n;
    cin >> n;

    long long result = 0;
    for (int i = 1; i <= n; i++)
    {
        long long num;
        cin >> num;

        long long cnt = returnCount(num);
        if (cnt > result)
        {
            result = cnt;
        }
    }

    cout << result << endl;

    return 0;
}
