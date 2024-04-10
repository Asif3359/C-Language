#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N];
    int Number;

    for (int i = 0; i < N; i++)
    {
        cin >> Number;
        arr[i] = Number;
    }

    // Bubble Sort
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

    return 0;
}
