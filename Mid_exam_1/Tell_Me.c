#include<stdio.h>

int main(int argc, char const *argv[])
{
    int T ;
    scanf("%d",&T);

    while(T--)
    {
        int N;
        scanf("%d",&N);
        int arr[N];
        for(int i = 0 ; i<N ; i++)
        {
            scanf("%d",&arr[i]);
        }
        int X ;
        scanf("%d",&X);
        int flag = 0 ;
        for(int i = 0 ; i<N ; i++)
        {
           if(arr[i] == X)
           {
                flag = 1 ;
                break ;
           }
        }
        if(flag==0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}
