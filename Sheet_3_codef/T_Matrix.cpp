#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int N ;
    cin >> N ;
    int arr [N][N];
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j<N ; j++)
        {
            cin>> arr[i][j];
        }
    }
    int sum1 = 0;
    int sum2 = 0 ;

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j<N ; j++)
        {
           if(i+j == N-1)
           {
            sum1 = sum1 + arr[i][j]; 
           }
           if(i==j)
           {
            sum2 = sum2 + arr[i][j]; 
           }
        }
    }
    int result = sum1 - sum2 ;
    if(result<0)
    {
        result = -result ;
    }

    cout << result << endl;
    return 0;
}


