#include <stdio.h>

 long long int factorial (int n)
{
    if(n==0) return 1 ;
    return n*factorial(n-1);
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    long long int fact = factorial(n);
    printf("%lld\n", fact);
    return 0;
}