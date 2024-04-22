#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main() {
 

     double X1, Y1, X2, Y2, Distance;
     cin >> X1 >> Y1;
     cin>> X2>> Y2;
     Distance = sqrt(((X2-X1)*(X2-X1))+((Y2-Y1)*(Y2-Y1)));
     cout<<fixed<<setprecision(4)<<Distance<<endl;
 
    return 0;
}