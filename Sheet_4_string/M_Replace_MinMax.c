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
    int max = arr[0];
    int min = arr[0];

    int c1 = 0 ;
    int c2 = 0 ;

    for(int i = 0 ; i<N ; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
            c1 = i;
        }
        if(min > arr[i])
        {
            min = arr[i];
            c2 = i;
        }
    }

    int temp = arr[c1];
    arr[c1] = arr[c2];
    arr[c2] = temp ;

    for(int i = 0 ; i<N ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    
    return 0;
}
