#include<stdio.h>

int main(int argc, char const *argv[])
{
    char str[100001] ;
    scanf("%s",str);
    long long int count = 0 ;
    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            count++;
        }
    }
    printf("%lld",count);
    return 0;
}
