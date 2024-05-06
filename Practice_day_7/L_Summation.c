#include<stdio.h>

long long int sumOf (int *arr, int n)
{
    if(n==0) return 0 ;

    long long int sum = arr[n-1]+sumOf(arr,n-1);

    return sum ;
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
    long long int sum = sumOf(arr,n);

    printf("%lld",sum);
    return 0;
}
