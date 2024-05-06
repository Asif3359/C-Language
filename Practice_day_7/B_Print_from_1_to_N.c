#include<stdio.h>

void req(int n)
{
    
    if(n==0) return ;
    req(n-1);
    printf("%d\n",n);
    
    
}

int main(int argc, char const *argv[])
{
    int n ;
    scanf("%d",&n);

    req(n);

    return 0;
}
