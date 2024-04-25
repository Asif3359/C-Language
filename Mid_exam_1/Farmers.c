#include<stdio.h>

int main(int argc, char const *argv[])
{
    int T ;
    scanf("%d",&T);

    while(T--)
    {
        int M1 , M2 , D ;
        scanf("%d %d %d",&M1, &M2, &D);

        long long int D2 = M1 * D /(M1+M2);

        long long int res = D-D2;
        printf("%lld\n",res);
        
         
    }
    return 0;
}
