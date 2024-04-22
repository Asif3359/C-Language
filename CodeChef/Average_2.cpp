#include<iostream>
#include <iomanip> 
using namespace std;

int main(int argc, char const *argv[])
{
    double X , Y , Z ;
    cin >> X >> Y >> Z ;

    double result = ((X*2)+(Y*3)+(Z*5))/(2+3+5);
    cout << "MEDIA = " << fixed << setprecision(1) << result << endl;
    return 0;
}


