// #include <iostream>
// #include <vector>

// using namespace std;

// void printDigit(long long int num)
// {
//     while (num > 0)
//     {
//         int digit = num % 10;
//         cout << digit << " ";
//         num = num / 10;
//     }
// }

// int main(int argc, char const *argv[])
// {
//     int N;
//     cin >> N;
//     for (int i = 1; i <= N; i++)
//     {
//         long long int M;
//         cin >> M;
//         printDigit(M);
//     }

//     return 0;
// }
#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++)
    {
        string N;
        cin >> N;
        int size = N.size();

        for (int i = size - 1; i >= 0; i--)
        {
            cout << N[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
