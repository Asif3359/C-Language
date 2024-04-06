#include <iostream>
using namespace std;

int main()
{
    long long int N;
    cin >> N;

    if (N >= 2)
    {

        for (int i = 2; i <= N; i++)
        {
            bool isPrime = true;

            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime)
                cout << i <<" ";
        }
    }

    return 0;
}
