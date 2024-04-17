#include <stdio.h>

int main(int argc, char const *argv[])
{
    int T;
    scanf("%d", &T);
    int arr[T];

    for (int i = 0; i < T; i++)
    {
        long long N;
        scanf("%lld", &N);
        if (N > 0)
        {
            arr[i] = 1;
        }
        else if (N < 0)
        {
            arr[i] = 2;
        }
        else
        {
            arr[i] = 0;
        }
    }
    for (int i = 0; i < T; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
