#include<stdio.h>

int main(int argc, char const *argv[])
{
    char str[10000+1] ;
    scanf("%s",str);

    int arr[26];
    for(int i = 0 ; i<26 ; i++)
    {
        arr[i] = 0 ;
    }

    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        arr[str[i]-'a']++;
    }
    for(int i = 0 ; i<26 ; i++)
    {
        if(arr[i] != 0)
        {
            printf("%c - %d\n",i+'a',arr[i]);
        }
    }
    return 0;
}
