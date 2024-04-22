#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int C ;
    cin >> C ;

    int res ;

    if(C%5 == 0)
    {
        res = C/5 ;
    }
    else
    {
        res = ( C/5 )+1 ;
    }
    cout << res << endl;
    return 0;
}


