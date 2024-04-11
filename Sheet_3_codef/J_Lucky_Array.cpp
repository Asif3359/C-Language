#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int min = arr[0];
    for (int j = 0; j < N; j++)
    {
        if (min > arr[j])
        {
            min = arr[j];
        }
    }

    int count = 0;
    for (int k = 0; k < N; k++)
    {
        if (min == arr[k])
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        cout << "Unlucky" << endl;
    }
    else
    {
        cout << "Lucky" << endl;
    }

    return 0;
}
