#include<stdio.h>

int main(int argc, char const *argv[])
{
    char s[1000000+1];
    scanf("%s",s);

    int sum = 0;
    int count = 0;

    for(int i = 0 ; s[i] != '\0' ; i++)
    {
        sum = sum + s[i]-'0';
        count++;
    }
    printf("%d",sum);

    return 0;
}
