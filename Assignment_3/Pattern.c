#include<stdio.h>

int main(int argc, char const *argv[])
{
    int N ;
    scanf("%d",&N);
    int S = N-1 ;
    int K = 1;

    for(int i = 1 ; i<= N*2 ; i++)
    {
        for(int j = 1 ; j<=S ; j++)
        {
            printf(" ");
        }
        for(int j = 1 ; j<=K ; j++)
        {
            if(i%2==0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        if(i <= N-1)
        {
            S--;
            K=K+2;
        }
        if(i>N-1)
        {
            S++;
            K=K-2;
        }
        printf("\n");
    }
    
    return 0;
}
