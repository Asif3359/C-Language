#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int M, X, Y, Z;

        scanf("%lld %lld %lld %lld", &M, &X, &Y, &Z);

        if (M % (X * Y * Z) == 0)
        {
            long long int multi = M / (X * Y * Z);
            printf("%lld\n", multi);
        }
        else
        {
            printf("%d\n", -1);
        }
    }
    return 0;
}