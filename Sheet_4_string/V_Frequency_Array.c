#include<stdio.h>

int main(int argc, char const *argv[])
{
    int N, M;

    scanf("%d %d", &N, &M);

    int arr[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count[M];


    for(int i = 0; i < M; i++)
    {
        count[i] = 0;
    }

    for(int i = 0; i < N; i++)
    {
        count[arr[i]-1]++;
    }

    for(int i = 0; i <M; i++)
    {
        printf("%d\n", count[i]);
    }
    
    return 0;
}
