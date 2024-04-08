#include <iostream>
using namespace std;

int minimum(int min, int num)
{
    if (min < num)
    {
        return min;
    }
    else
    {
        return num;
    }
}

int main()
{
    int N, K;
    cin >> N >> K;

    int numbers[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i <= N - K; i = i + K)
    {
        int min = numbers[i];
        for (int j = 1; j < K; j++)
        {
            min = minimum(min, numbers[i + j]);
        }
        cout << min << " ";
    }

    if (N % K != 0)
    {
        int min = numbers[(N / K) * K];
        for (int i = (N / K) * K + 1; i < N; ++i)
        {
            min = minimum(min, numbers[i]);
        }
        cout << min << " ";
    }

    return 0;
}// 8 4 4 -1 2 3 5 0 2 7