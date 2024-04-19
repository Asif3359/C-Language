#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n1 , n2 ;
    cin >> n1 >> n2 ;

    int sum = n1 + n2 ;
    int sub = n1 - n2 ;

    if(sum < 0)
    {
        sum = - sum;
    }
    if(sub < 0)
    {
        sub = - sub;
    }

    cout << sum <<endl;
    cout << sub <<endl;

    return 0;
}


