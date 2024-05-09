#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int arr[N][M];
    bool takeWater[N][M] = {false};

    // Reading the weights of watermelons
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> arr[i][j];
        }
    }

    int C;
    cin >> C;
    while (C--)
    {
        int cho;
        cin >> cho;
        if (cho == 1)
        {
            int X, Y;
            cin >> X >> Y;
            if (!takeWater[X - 1][Y - 1])
            {
                cout << arr[X - 1][Y - 1] << "\n";
                takeWater[X - 1][Y - 1] = true;
            }
            else
            {
                cout << "Tormuj Nai\n";
            }
        }
        else if (cho == 2)
        {
            int K;
            cin >> K;
            int untakenCount = 0;
            int lightest = 0;

            for (int i = 0; i < N; ++i)
            {
                for (int j = 0; j < M; ++j)
                {
                    if (!takeWater[i][j])
                    {
                        untakenCount++;
                        if (untakenCount == K)
                        {
                            lightest = arr[i][j];
                            break;
                        }
                    }
                }
                if (untakenCount == K)
                {
                    break;
                }
            }
            if (untakenCount == 0 || K > untakenCount)
            {
                cout << "Tormuj Shesh\n";
            }
            else
            {
                cout << lightest << endl;
                
                for (int i = 0; i < N; ++i)
                {
                    for (int j = 0; j < M; ++j)
                    {
                        if (arr[i][j] == lightest)
                        {
                            takeWater[i][j] = true;
                            break;
                        }
                    }
                }
            }
        }
    }

    return 0;
}
