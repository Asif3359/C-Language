#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long A, B;
    cin >> A >> B;

    long long result1 = A % 10;
    long long result2 = B % 10;
    long long result = result1 + result2;

    cout << result << endl;

    return 0;
}
