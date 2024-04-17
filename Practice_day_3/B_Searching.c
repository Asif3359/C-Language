#include <stdio.h>

int linearSearch(int arr[], int K, int T)
{
    for (int i = 0; i < T; i++)
    {
        if (arr[i] == K)
        {
            return i;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int T;
    scanf("%d", &T);
    int arr[T];

    for (int i = 0; i < T; i++)
    {
        long long N;
        scanf("%lld", &N);
        arr[i] = N;
    }

    int K;
    scanf("%d", &K);
    int index = linearSearch(arr, K, T);
    printf("%d\n", index);

    return 0;
}
