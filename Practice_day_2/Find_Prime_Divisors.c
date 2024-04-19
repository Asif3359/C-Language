#include<stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int n ;
    scanf("%d",&n);

    bool foundPrimeFactor = false;

    for(int i=2 ; i <= n ;i++)
    {
        bool isPrime = true ;
        for(int j = 2; j*j <= i ; j++)
        {
            if(i%j == 0)
            {
                isPrime = false ;
                break;
            }
        }
        if(isPrime)
        {
           if(n%i == 0)
           {
            printf("%d ",i);
            foundPrimeFactor=true;
           }
        }
    }
    if(!foundPrimeFactor) { // If no prime factors are found, print -1
        printf("-1");
    }
    printf("\n");
    return 0;
}
