#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    int max = INT_MIN;
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);

        if (max < n)
        {
            max = n;
        }
    }
    printf("%d\n", max);

    return 0;
}
