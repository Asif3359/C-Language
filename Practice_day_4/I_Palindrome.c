#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(int argc, char const *argv[])
{
    char st[1000+1];
    scanf("%s",&st);

    int len = strlen(st);
    int start = 0 ;
    int end = len-1;

    bool isPa = true ;
    while(start<end)
    {
        if(st[start] != st[end])
        {
            isPa = false ;
        }
        start++;
        end--;
    }
    if(isPa)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
