#include<stdio.h>

int main(int argc, char const *argv[])
{
    int N ;
    
    scanf("%d",&N);
    int arr[N+1];

    for(int i = 0 ; i<N ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int pos ;
    int value ;

    scanf("%d %d",&pos,&value);

    for(int i = N ; i>pos ; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos] = value;
      for(int i = 0 ; i<=N ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
