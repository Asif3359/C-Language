#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    long long X, Y;
    cin >> X >> Y;

    if (X % Y == 0 || Y % X == 0)
    {
        cout << "Multiples" << endl;
    }
    else
    {
        cout << "No Multiples" << endl;
    }

    return 0;
}
