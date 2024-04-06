#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    cout << 1 << "\n";
    for (int i = 2; i <= N / 2; i++)
    {
        if (N % i == 0)
        {
            cout << i << "\n";
        }
    }
    cout << N << "\n";

    return 0;
}
