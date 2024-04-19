#include<stdio.h>

int main(int argc, char const *argv[])
{
    char ch ;
    scanf(" %c",&ch);
    char res ;
    if( ch =='z')
    {
        printf("%c",ch-25);
    }
    else
    {
        printf("%c",ch+1);
    }
    return 0;
}
