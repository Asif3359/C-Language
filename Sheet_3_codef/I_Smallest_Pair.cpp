#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int N;
        cin >> N;

        int arr[N];

        for (int j = 0; j < N; j++)
        {
            cin >> arr[j];
        }
        int min = arr[0] + arr[1] + 1;
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                if (1 <= i && i < j && j <= N)
                {
                    int sum = arr[i - 1] + arr[j - 1] + j - i;
                    if (min > sum)
                    {
                        min = sum;
                    }
                }
            }
        }
        cout << min << endl;
    }

    return 0;
}
