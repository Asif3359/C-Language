#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[100000];

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        long long N;
        cin >> N;
        arr[i] = N;
    }

    long long sum = 0;
    for (int i = 0; i < T; i++)
    {
        sum = sum + arr[i];
    }
    cout << abs(sum) << endl;

    return 0;
}
