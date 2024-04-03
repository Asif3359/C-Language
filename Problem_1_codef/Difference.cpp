#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long long result;
    result = (A * B) - (C * D);

    cout << "Difference = " << result << endl;

    return 0;
}
