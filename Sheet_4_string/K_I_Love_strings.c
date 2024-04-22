#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    int T ;
    scanf("%d",&T);

    while(T--)
    {
        char s1[100] ;
        char s2[100] ;
        scanf("%s %s",&s1,&s2);

        int max ;
        int s1Len = strlen(s1);
        int s2Len = strlen(s2);
        
        if(s1Len > s2Len)
        {
            max = s1Len;
        }
        else
        {
            max = s2Len ;
        }
        
        for(int i = 0 ; i< max ; i++)
        {
            if(i < s1Len)
            {
                printf("%c",s1[i]);
            }
            if(i < s2Len)
            {
                printf("%c",s2[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
