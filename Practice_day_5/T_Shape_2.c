#include<stdio.h>

int main(int argc, char const *argv[])
{
    int N ;
    scanf("%d",&N);
    int S = N-1 ;
    int K = 1;

    for(int i = 1 ; i<=N ; i++)
    {
        for(int j = 1 ; j<=S ; j++)
        {
            printf(" ");
        }
        for(int j = 1 ; j<=K ; j++)
        {
            printf("*");
        }
        S--;
        K=K+2;
        printf("\n");
    }

    return 0;
}
