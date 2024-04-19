#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int N , M ;
    cin >> N >> M ;

    int arr [N] [M];

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j<M ; j++)
        {
            cin>> arr[i][j];
        }
    }
    int key ;
    cin >> key ;
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j<M ; j++)
        {
            if(key == arr[i][j])
            {
                cout<<"will not take number\n";
                return 0 ;
            }   
        }
    }
    cout<<"will take number\n";

    return 0;
}


