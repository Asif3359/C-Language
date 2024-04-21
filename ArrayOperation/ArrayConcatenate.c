#include<stdio.h>

int main(int argc, char const *argv[])
{
    int N,M ;
    printf("Enter size of 2 array :");
    scanf("%d %d",&N,&M);
    int arr1[N];
    int arr2[M];
    int arr3[N+M];

    printf("Enter Elements of 1st array:");
    for(int i =  0 ; i<N ; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter Elements of 2nd array:");
    for(int i =  0 ; i<M ; i++)
    {
        scanf("%d",&arr2[i]);
    }

    for(int i = 0 ; i<N ; i++)
    {
        arr3[i]=arr1[i];
    }
    int index = 0 ;
    for(int i = N ; i<N+M ; i++)
    {
        arr3[i]=arr2[index];
        index++;
    }
    for(int i = 0 ; i<N+M ; i++)
    {
        printf("%d ",arr3[i]);
    }

    return 0;
}
