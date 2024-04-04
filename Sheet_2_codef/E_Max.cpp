#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{

    long long int N;
    cin >> N;
    long long int max = 0;

    int i;
    for (i = 1; i <= N; i++)
    {
        long long int number;
        cin >> number;

        if (max <= number)
        {
            max = number;
        }
    }

    cout << max << endl;

    return 0;
}
