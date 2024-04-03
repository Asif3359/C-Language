#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    double r;
    cin >> r;

    double area;
    area = 3.141592653 * r * r;

    cout << fixed << setprecision(9) << area << endl; 
    return 0;
}

