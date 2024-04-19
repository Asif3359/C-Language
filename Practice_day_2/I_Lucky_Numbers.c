#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n ;
    scanf("%d",&n);
    int f1 = n%10;
    int f2 = (n/10)%10;

    if(f1%f2==0 || f2%f1 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
