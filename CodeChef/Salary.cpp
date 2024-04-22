#include<iostream>
#include <iomanip> 
using namespace std;

int main(int argc, char const *argv[])
{
    int EmpNo ;
    double Hour ,Amount ;

    cin >> EmpNo >> Hour >> Amount ;

    double result = Hour*Amount;

    cout << "NUMBER = "<<EmpNo<<endl;
    cout << "SALARY = U$ "<< fixed << setprecision(2)<<result<<endl;
    return 0;
}


