#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N + 1];
    int Number;

    for (int i = 0; i < N; i++)
    {
        cin >> Number;
        arr[i] = Number;
    }
    for (int i = N - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
