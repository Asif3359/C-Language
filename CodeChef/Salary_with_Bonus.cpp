#include<iostream>
#include <iomanip>
#include<cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    string name ;
    cin >> name ;
    double salary , sold;
    cin >> salary >> sold ;

    double result = salary + (sold*15)/100;

    cout <<"TOTAL = R$ "<<fixed<<setprecision(2)<<result<<endl;

    return 0;
}


