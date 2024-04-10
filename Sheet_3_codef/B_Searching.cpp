#include <iostream>

using namespace std;

int linearSearch(int arr[], int K, int T)
{
    for (int i = 0; i < T; i++)
    {
        if (arr[i] == K)
        {
            return i;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    int arr[T];

    for (int i = 0; i < T; i++)
    {
        long long N;
        cin >> N;
        arr[i] = N;
    }

    int K;
    cin >> K;
    int index = linearSearch(arr, K, T);
    cout << index << endl;

    return 0;
}
