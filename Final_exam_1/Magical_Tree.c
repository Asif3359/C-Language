#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N;
    scanf("%d", &N);

    int line = 10 + (N / 2) + 1;

    int S = line - 6;
    int K = 1;

    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= S; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= K; j++)
        {
            printf("*");
        }
        if (i >= line - 5)
        {
            K = N;
            S = 5;
        }
        else if (i < line - 5)
        {
            S--;
            K = K + 2;
        }
        printf("\n");
    }
    return 0;
}
