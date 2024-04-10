#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }
    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
