#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n ;
    scanf("%d",&n);

    int a = 0 ;
    int b = 1 ;
    int fibonacci = a+b ;

    if(n==1)
    {
        printf("%d ",a);
    }
    else if (n==2)
    {
        printf("%d %d ",a , b);
    }
    else
    {
        printf("%d %d ",a , b);
        for(int i = 3 ; i <= n ; i++ )
        {
            printf("%d ",fibonacci);
            a = b ;
            b = fibonacci;
            fibonacci = a+b;
        }
        printf("\n");
    }
    
    
   
   
    return 0;
}
