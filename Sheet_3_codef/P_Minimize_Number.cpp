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
    int operation = 0;
    bool allEven = true;

    while (allEven)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                allEven = false;
                break;
            }
            arr[i] = arr[i] / 2;
        }
        if (allEven)
        {
            operation++;
        }
    }
    cout << operation << endl;

    return 0;
}
