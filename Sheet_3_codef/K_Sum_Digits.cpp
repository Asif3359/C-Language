#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;

    string digits;
    cin >> digits;

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum = sum + digits[i] - '0';
    }
    cout << sum << endl;

    return 0;
}
