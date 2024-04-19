#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int N , M ;
    cin >> N >> M ;

    char arr[N][M];

    for(int i = 0 ; i< N ; i++)
    {
        for (int j = 0 ; j< M ; j++)
        {
            cin>> arr[i][j];
        }
    }
    int row , col ;
    cin >> row >> col ;
    row-- ; 
    col--;

    if( arr[row][col-1] !='.' &&
        arr[row][col+1] !='.' &&
        arr[row-1][col] !='.' &&
        arr[row+1][col] !='.' &&
        arr[row+1][col-1] !='.' &&
        arr[row-1][col+1] !='.' &&
        arr[row-1][col-1] !='.' &&
        arr[row+1][col+1] !='.')
    {
        cout << "yes\n";
    }
    else
    {
        cout << "no\n";
    }
    return 0;
}


