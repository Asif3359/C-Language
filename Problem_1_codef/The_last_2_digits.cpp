#include <iostream>

using namespace std;

int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long long product = ((A % 10000) * (B % 10000) * (C % 10000) * (D % 10000)) % 100;

    cout << product / 10 << product % 10 << endl;

    return 0;
}
