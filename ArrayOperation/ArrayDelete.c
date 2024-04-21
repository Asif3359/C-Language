#include<stdio.h>

int main(int argc, char const *argv[])
{
    int N ;
    scanf("%d",&N);

    int arr[N];

    for(int i = 0 ; i<N ; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int pos ;
    scanf("%d",&pos);

    for(int i = pos ; i<N ; i++)
    {
        arr[i]=arr[i+1];
    }
    for(int i = 0 ; i<N-1 ; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
