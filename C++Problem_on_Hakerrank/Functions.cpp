#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n1 ,n2, n3, n4 ;

    cin >> n1 >> n2 >> n3 >> n4 ;

    int max = n1 ;

    if(max<n1)
    {
        max = n1 ;
    }
    if(max < n2)
    {
        max = n2 ;
    }
    if(max < n3)
    {
        max = n3 ;
    }
    if(max < n4)
    {
        max = n4 ;
    }

    cout << max << endl;


    return 0;
}


