#include <iostream>

using namespace std;

int maxNumber(int N, int M)
{
    if (N > M)
    {
        return N;
    }
    else if (M > N)
    {
        return M;
    }
    else
    {
        return N;
    }
}
int minNumber(int N, int M)
{
    if (N < M)
    {
        return N;
    }
    else if (M < N)
    {
        return M;
    }
    else
    {
        return N;
    }
}

int main(int argc, char const *argv[])
{
    int T;
    int N, M;

    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cin >> N >> M;

        int max = maxNumber(N, M);
        int min = minNumber(N, M);

        int sum = 0;
        for (int i = min + 1; i < max; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
