#include<stdio.h>
#include<string.h>

int is_palindrome (char *str)
{
    int len = strlen(str);
    

    int start = 0 ;
    int end = len-1 ;
    int count = 0 ;

    while(start<len)
    {
        if(str[start] != str[end])
        {
            return 0 ;
        }
        start++;
        end--;
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    char str [1001];
    scanf("%s",str);

    if(is_palindrome(str))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}
