#include<stdio.h>

void req(int n)
{
    
    if(n==1){
        printf("%d",1);
        return ;
    }
    printf("%d ",n);
    req(n-1);
}

int main(int argc, char const *argv[])
{
    int n ;
    scanf("%d",&n);

    req(n);

    return 0;
}
