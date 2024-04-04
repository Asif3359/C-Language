#include <iostream>

using namespace std;

int main()
{
    long long n, m, k;
    cin >> n >> m >> k;

    // Find the minimum count among the number of eyes, mouths, and bodies
    long long min_count = min(min(n, m), k);

    long long result;

    if (min_count == k)
    {
        result = k;
    }
    else if (min_count == m)
    {
        long long additional_katryoshkas = (n - min_count) / 2;
        result = min_count + additional_katryoshkas;
        if (result > k)
        {
            result = k;
        }
    }
    else
    {
        long long additional_katryoshkas = (n - min_count) / 2;
        result = min_count + additional_katryoshkas;
    }

    cout << result << endl;

    return 0;
}
