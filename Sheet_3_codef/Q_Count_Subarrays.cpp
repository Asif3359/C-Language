#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        for (int j = 0; j < n; j++)
        {
            int k = j;
            while (k + 1 < n && arr[k] <= arr[k + 1])
            {
                k++;
            }
            int len = k - j + 1;                   // Length of the non-decreasing subarray starting at index j
            count = count + (len * (len + 1)) / 2; // Add count of subarrays to result
            j = k;                                 // Move j to the end of the current non-decreasing subarray
        }
        cout << count << endl;
    }

    return 0;
}
