#include<iostream>

using namespace std;

void reverse(int str ,int end , int arr[])
{
    while(str<end)
    {
        swap(arr[str],arr[end]);
        str++;
        end--;
    }
}

int main(int argc, char const *argv[])
{
    int N ;
    cin >> N ;

    int arr[N];

    for(int i = 0 ; i<N ; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0 ; i<N ; i++)
    {
        int count = i ;
        if(arr[i] == 0 )
        {
            reverse(0 , i-1, arr);
        }
    }
    for (int i = 0; i < N; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}


