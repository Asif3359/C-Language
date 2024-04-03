#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
    double N;
    cin >> N;

    if (N == floor(N))
    {
        cout << "int " << static_cast<int>(N) << endl;
    }
    else
    {
        int int_part = static_cast<int>(N);
        double decimal_part = N - int_part;
        cout << "float " << int_part << " " << decimal_part << endl;
    }

    return 0;
}
