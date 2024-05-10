#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N, M;

    scanf("%d %d", &N, &M);

    int arr[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    if (N != M)
    {
        printf("NO\n");
        return 0;
    }
    int flag = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != 1)
                {
                    flag = 1;
                }
            }
            if (i + j == N - 1)
            {
                if (arr[i][j] != 1)
                {
                    flag = 1;
                }
            }
            if (i != j && i + j != N - 1)
            {
                if (arr[i][j] != 0)
                {
                    flag = 1;
                }
            }
        }
    }

    if (flag == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
