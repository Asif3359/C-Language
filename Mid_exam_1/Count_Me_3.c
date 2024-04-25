#include<stdio.h>

int main(int argc, char const *argv[])
{
    int T ;
    scanf("%d",&T);
    
    while(T--)
    {
        char str[10001];
        scanf("%s",&str);
        int count1 = 0 , count2 = 0 , count3 = 0 ;
        for(int i = 0 ; str[i] !='\0' ; i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                count1++;
            }
            else if(str[i]>='a' && str[i]<='z')
            {
                count2++;
            }
            else if(str[i]>='0' && str[i]<='9')
            {
                count3++;
            }
        }
        printf("%d %d %d\n",count1, count2, count3);
    }

    return 0;
}
