#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long X, Y;
    cin >> X >> Y;

    // 5 + 10 = 15 5 * 10 = 50 5 - 10 = -5

    long long add = X + Y;
    cout << X << " + " << Y << " = " << add << endl;

    long long Multi = X * Y;
    cout << X << " * " << Y << " = " << Multi << endl;

    long long SUB = X - Y;
    cout << X << " - " << Y << " = " << SUB << endl;

    return 0;
}
