#include <iostream>
using namespace std;

int main()
{
    long long int N;
    cin >> N;

    int i = 2;
    bool isPrime = true;
    while (i < N)
    {
        if (N % i == 0)
        {
            isPrime = false;
        }
        i++;
    }
    if (isPrime)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
