#include<stdio.h>

int main(int argc, char const *argv[])
{
    int N ;
    scanf("%d",&N);
    int S = N ;
    for(int i = 1 ; i<=N ; i++)
    {
        for(int j = 1 ; j<=S ; j++)
        {
            printf("*");
        }
        S--;
        printf("\n");
    }
    return 0;
}
