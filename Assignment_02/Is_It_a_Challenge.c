#include<stdio.h>

int main(int argc, char const *argv[])
{
    long long int n ;
    scanf("%lld",&n);

    if(n>0)
    {
        for(long long int i = 1 ; i<=n ; i++)
        {
            printf("%lld ",i);
        }
    }
    else
    {
        for(long long int i = n ; i<=0 ; i++)
        {
            printf("%lld ",i);
        }
    }
    return 0;
}
