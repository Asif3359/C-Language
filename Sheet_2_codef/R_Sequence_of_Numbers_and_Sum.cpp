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
    int N, M;
    while (true)
    {
        cin >> N >> M;
        if (N <= 0 || M <= 0)
        {
            return 0;
        }

        int max = maxNumber(N, M);
        int min = minNumber(N, M);

        int sum = 0;
        for (int i = min; i <= max; i++)
        {
            sum = sum + i;
            cout << i << " ";
        }
        cout << "sum =" << sum << endl;
    }
    return 0;
}
