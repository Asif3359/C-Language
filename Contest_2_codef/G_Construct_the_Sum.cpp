#include <iostream>

using namespace std;

long long result[1000000];

int main()
{
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        long long n, s;
        cin >> n >> s;
        long long count = 0;
        if (n * (n + 1) / 2 < s)
        {
            cout << "-1" << endl;
        }
        else
        {
            long long sum = 0;
            for (int j = n; j >= 1; j--)
            {
                if (sum + j <= s)
                {
                    sum = sum + j;
                    result[count] = j;
                    count++;
                }
                if (sum == s)
                {
                    break;
                }
            }
        }
        for (int k = 0; k < count; k++)
        {
            cout << result[k] << " ";
        }
        cout << endl;
    }

    return 0;
}
