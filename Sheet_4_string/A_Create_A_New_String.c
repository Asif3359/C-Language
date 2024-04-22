#include<stdio.h>

int main(int argc, char const *argv[])
{

    char ch[10*10*10+1];
    char ch2[10*10*10+1];

    scanf("%s",&ch);
    scanf("%s",&ch2);

    int count = 0 ;
    for(int i = 0 ; ch[i]!='\0' ; i++)
    {
        count++;
    }

    int count2 = 0 ;
    for(int i = 0 ; ch2[i]!='\0' ; i++)
    {
        count2++;
    }
    printf("%d %d\n",count,count2);
    printf("%s %s\n",ch, ch2);

    
    return 0;
}
