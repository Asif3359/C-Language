#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int t ;
    cin >> t ;

    int arr[t];

    for(int i = 0 ; i< t ; i++)
    {
        cin>> arr[i];
    }
    for(int i = t-1 ; i>=0 ; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}


