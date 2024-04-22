#include<iostream>
#include <iomanip>

using namespace std;
double PI = 3.14159;

int main(int argc, char const *argv[])
{
    double R ;
    cin >> R ;
    double R1 = R*R*R ;
    double result = (double)4/(double)3*(PI)*R1;
    cout << "VOLUME = "<< fixed << setprecision(3)<<result<<endl;
    return 0;
}


