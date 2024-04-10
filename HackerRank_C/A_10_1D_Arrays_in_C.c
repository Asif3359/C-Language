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
    int sum = 0 ;
    for (int i = 0; i < N; i++)
    {
       sum = sum + arr[i];
    }

    printf("%d\n",sum);

    return 0;
}
