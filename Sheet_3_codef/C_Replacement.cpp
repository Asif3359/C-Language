#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    int arr[T];

    for (int i = 0; i < T; i++)
    {
        long long N;
        cin >> N;
        if (N > 0)
        {
            arr[i] = 1;
        }
        else if (N < 0)
        {
            arr[i] = 2;
        }
        else
        {
            arr[i] = 0;
        }
    }
    for (int i = 0; i < T; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
