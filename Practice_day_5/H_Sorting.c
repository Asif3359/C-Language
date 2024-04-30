#include<stdio.h>

void swap(int *a , int *b)
{
    int t = *a ;
    *a = *b ;
    *b = t ;
}

int main(int argc, char const *argv[])
{
    int N ;
    scanf("%d",&N);

    int arr[N];

     for(int i = 0 ; i<N ; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i = 0 ; i<N-1 ; i++)
    {
        for(int j = i+1 ; j<N ; j++)
        {
            if(arr[i]>arr[j])
            {
                swap(&arr[i] , &arr[j]);
            }
        }
    }
    for(int i = 0 ; i<N ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}
