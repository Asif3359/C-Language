#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    long long X, Y;
    cin >> X >> Y;

    double result = static_cast<double>(X) / Y; 
    
    cout << "floor " << X << " / " << Y << " = " << floor(result) << endl;
    cout << "ceil " << X << " / " << Y << " = " << ceil(result) << endl;
    cout << "round " << X << " / " << Y << " = " << round(result) << endl;

    return 0;
}
