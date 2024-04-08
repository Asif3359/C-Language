#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int a , b;

    cin >> a >> b ;

    int sub = 0 ;
    sub = a - b ;
    if(sub <0 )
    {
        sub = 0 ;
    }
    cout << sub <<endl;
    return 0;
}
