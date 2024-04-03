#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long X;
    cin >> X;

    long long result = (X * (X + 1)) / 2;
    cout << result << endl;

    return 0;
}
