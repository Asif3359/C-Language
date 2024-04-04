#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int T;
    cin >> T;

    int even_count = 0, odd_count = 0, positive_count = 0, negative_count = 0;

    int i;
    for (i = 1; i <= T; i++)
    {
        int N;
        cin >> N;

        if (N % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }

        if (N > 0)
        {
            positive_count++;
        }
        else if (N < 0)
        {
            negative_count++;
        }
    }
    cout << "Even: " << even_count << endl;
    cout << "Odd: " << odd_count << endl;
    cout << "Positive: " << positive_count << endl;
    cout << "Negative: " << negative_count << endl;

    return 0;
}
