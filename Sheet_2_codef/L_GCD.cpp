#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int N, M;
    cin >> N >> M;
    int max = 0;
    for (int i = 1; i <= (N * M) / 2; i++)
    {
        if (N % i == 0 && M % i == 0)
        {
            if (max < i)
            {
                max = i;
            }
        }
    }

    cout << max << endl;

    return 0;
}
