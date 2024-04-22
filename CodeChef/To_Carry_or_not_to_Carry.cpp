#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long int A , B ;
    while(cin>> A >> B)
    {
        long long int res = A^B ;
        cout<<res<<endl;
    }
    return 0;
}


