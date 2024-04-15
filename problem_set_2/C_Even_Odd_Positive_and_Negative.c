#include <stdio.h>

int main(int argc, char const *argv[])
{
    int test;
    scanf("%d", &test);

    int even = 0;
    int odd = 0;
    int pos = 0;
    int neg = 0;

    for (int t = 1; t <= test; t++)
    {
        int n;
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (n > 0)
        {
            pos++;
        }
        else if (n < 0)
        {
            neg++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, pos, neg);

    return 0;
}
