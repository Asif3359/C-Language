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

    int start = 0 ;
    int end = N-1;

    
    while(start<end)
    {
        int tempt = arr[start];
        arr[start]=arr[end];
        arr[end]=tempt;

        start++;
        end--;
    }

    for(int i = 0 ; i<N ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
