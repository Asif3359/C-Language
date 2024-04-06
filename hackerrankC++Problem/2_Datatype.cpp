#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int A;
    long long int B;
    char C;
    float D;
    double E;

    cin >> A >> B >> C >> D >> E;

    cout << A << "\n"
         << B << "\n"
         << C << "\n"
         << fixed << setprecision(3) << D << "\n"  // Set precision to 3 decimal places for float
         << fixed << setprecision(9) << E << "\n"; // Set precision to 9 decimal places for double

    return 0;
}
