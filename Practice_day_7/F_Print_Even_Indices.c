#include<stdio.h>

void even(int *arr, int n)
{
    if(n==0) return ;

    if(n%2 != 0 )
    {
        printf("%d ",arr[n-1]);
    }    
    even(arr,n-1);
    
}

int main(int argc, char const *argv[])
{
    int n ;
    scanf("%d",&n);
    int arr[n];

    for(int i = 0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    even(arr,n);
    return 0;
}
