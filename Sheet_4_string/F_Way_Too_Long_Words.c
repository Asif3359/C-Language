#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    int  T ;
    scanf("%d",&T) ;

    while(T--)
    {
        char st[1000] ;
        scanf("%s",&st);

        int len = strlen(st);
        if(len > 10)
        {
            int res = len-2 ;
            printf("%c%d%c\n",st[0],res,st[res+1]);
        }
        else
        {
            printf("%s\n",st);
        }
    }



    return 0;
}
