#include<iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int N , K ;
    cin >> N >> K ;

    long long int arr[N] ;

    for(int i = 0 ; i<N ; i++)
    {
        cin>>arr[i];
    }
    
    sort(arr, arr+N);
    
    if(K==1)
    {
        cout<<arr[N-1]<<endl;
        return 0 ;
    }
    else
    {
        long long int sum = 0;
        for (int i = N-1; i>=N-K; i--) 
        {
            if(arr[i]<0)
            {
                break ;
            }
            sum += arr[i];
        }
        cout << sum <<endl;
    }

    return 0;
}


