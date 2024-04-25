#include<iostream>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int N ;
    cin >> N ;
    int arr[N];

    for(int i = 0 ; i<N ; i++ )
    {
        cin >> arr[i];
    }
    sort(arr, arr+N);
  
    int count = 0 ;

    for(int i = 0 ; i<N ; i++ )
    {

        for(int j = 0 ; j<N ; j++)
        {
            if(arr[i] == arr[j]+1)
            {
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}


