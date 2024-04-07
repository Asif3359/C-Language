#include <iostream>
#include <cmath>

using namespace std;

int convertBinary(int Number)
{
    int Sum = 0;
    int i = 0;
    while (Number > 0)
    {
        if (Number % 2 == 1)
        {
            Sum = Sum + (1 * pow(2, i));
        }
        else
        {
            i--;
        }
        Number = Number / 2;
        i++;
    }
    return Sum;
}

int main()
{
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        int Number;
        cin >> Number;

        int binary = convertBinary(Number);
        cout << binary << endl;
    }

    return 0;
}
