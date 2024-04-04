#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{

    long long int N;
    cin >> N;
    int i;
    for (i = 1; i <= 12; i++)
    {
        cout << N << " * " << i << " = " << N * i << endl;
    }

    return 0;
}
