#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    int A[T];

    for (int i = 0; i < T; i++)
    {
        long long N;
        cin >> N;
        A[i] = N;
    }
    for (int i = 0; i < T; i++)
    {
        if (A[i] <= 10)
        {
            cout << "A[" << i << "] = " << A[i] << endl;
        }
    }
    cout << endl;
    return 0;
}
