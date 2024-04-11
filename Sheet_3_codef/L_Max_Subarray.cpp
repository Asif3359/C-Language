#include <iostream>

using namespace std;

int max(int m, int n)
{
    if (m > n)
    {
        return m;
    }
    else
    {
        return n;
    }
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int arr[N];
        for (int i = 0; i < N; ++i)
        {
            cin >> arr[i];
        }

        // Iterate over all subarrays and find maximum number in each
        for (int i = 0; i < N; i++)
        {
            int mx = arr[i];
            for (int j = i; j < N; j++)
            {
                mx = max(mx, arr[j]);
                cout << mx << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
