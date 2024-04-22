#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b , c ;
    cin >> a >> b >> c ;

    int m = (a+b+abs(a-b))/2;

    int result = (m+c+abs(m-c))/2;
    cout << result<<" eh o maior"<<endl;
    return 0;
}


