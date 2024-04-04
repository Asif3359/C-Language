#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    double A, B, C;
    cin >> A >> B >> C;

    double result_1 = (A * B) / C;

    long long result_2 = result_1;

    double result_3 = result_1 - result_2;

    if (result_3 > 0)
    {
        cout << "double" << endl;
        return 0;
    }
    if (result_2 <= 2147483647)
    {
        cout << "int" << endl;
    }
    else
    {
        cout << "long long" << endl;
    }

    return 0;
}
