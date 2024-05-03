#include<stdio.h>

int main(int argc, char const *argv[])
{
    int N ;
    scanf("%d",&N);
    int S = N-1 ;
    int K = 1;

    for(int i = 1 ; i<= N ; i++)
    {
        for(int j = 1 ; j<=S ; j++)
        {
            printf(" ");
        }
        for(int j = K ; j>0 ; j--)
        {
             printf("%d",j);
        }
         S--;
         K++;
        printf("\n");
    }
    
    return 0;
}
