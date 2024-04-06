#include <stdio.h>

int main(int argc, char const *argv[])
{
    int maxAnd = 0, maxOr = 0, maxXor = 0;
    int N, K;
    scanf("%d %d", &N, &K);

    int i;
    for (i = 1; i <= N; i++)
    {
        int j;
        for (j = i + 1; j <= N; j++)
        {
            int and = j & i;
            if (maxAnd < and && and < K)
            {
                maxAnd = and;
            }
            int Or = j | i;
            if (maxOr < Or && Or < K)
            {
                maxOr = Or;
            }
            int Xor = j ^ i;
            if (maxXor < Xor && Xor < K)
            {
                maxXor = Xor;
            }
        }
    }
    printf("%d\n%d\n%d\n", maxAnd, maxOr, maxXor);

    return 0;
}
