#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min = arr[0];
    int max = arr[0];
    int mx = 0;
    int mn = 0;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            mn = i;
            min = arr[i];
        }
        if (max < arr[i])
        {
            mx = i;
            max = arr[i];
        }
    }

    int temp = arr[mn];
    arr[mn] = arr[mx];
    arr[mx] = temp;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
