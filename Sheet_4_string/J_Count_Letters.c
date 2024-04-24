#include<stdio.h>

int main(int argc, char const *argv[])
{
    char ch ;
    int fre[26]={0} ;

    while(scanf("%c",&ch) != EOF)
    {
        int index = ch - 97 ;
        fre[index]++ ;
    }
    for(int i = 0 ; i<26 ; i++)
    {
        if(fre[i] > 0)
        {
            printf("%c : %d\n",i+97 , fre[i]);
        }

    }

    return 0;
}
