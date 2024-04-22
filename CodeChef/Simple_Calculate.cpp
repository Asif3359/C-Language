#include<iostream>
#include <iomanip> 
using namespace std;

int main(int argc, char const *argv[])
{
    double c1 , u1, p1 ;
    double c2 , u2, p2 ;

    cin >> c1 >> u1 >> p1 ;
    cin >> c2 >> u2 >> p2 ;

    double result = (u1*p1) + (u2*p2);

    cout << "VALOR A PAGAR: R$ "<< fixed << setprecision(2)<<result<<endl;


    return 0;
}


