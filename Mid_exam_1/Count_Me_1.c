#include<stdio.h>

int main(int argc, char const *argv[])
{
    long long int N ;
    scanf("%lld",&N);

    long long int arr[N];

    for(int i = 0 ; i<N ; i++)
    {
        scanf("%lld",&arr[i]);
    }
    long long int count1 = 0 ;
    long long int count2 = 0 ;

    for(long long int i = 0 ; i<N ; i++)
    {
        if(arr[i]%2 == 0 )
        {
            count1++;
        }
        else if(arr[i]%3 ==0)
        {
            count2++;
        }
        else if(arr[i]%2 == 0 && arr[i]%3 ==0)
        {
            count2=count1;
        }
    }
    printf("%lld %lld",count1,count2);
    return 0;
}
