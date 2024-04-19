#include<stdio.h>

int main(int argc, char const *argv[])
{
    long long int a,b,c; 
    long long int d ;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    /*
    a+b-c
    a+b*c
    a-b+c
    a-b*c
    a*b+c
    a*b-c 
    */
    if ((a + b * c) == d ||
        (a + b - c) == d ||
        (a * b - c) == d ||
        (a * b + c) == d ||
        (a - b * c) == d ||
        (a - b + c) == d)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
