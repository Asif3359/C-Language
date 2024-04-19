#include<stdio.h>

int main(int argc, char const *argv[])
{
    long long int a,b ,res;
    scanf("%lld %lld",&a , &b);
    if(a-b >= 0 )
    {
        printf("%d\n",a-b);
    }
    else
    {
        printf("%d",0);
    }
    return 0;
}
