#include <iostream>
using namespace std;

int reverseInteger(int num)
{
    int reversed = 0;
    while (num != 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    return reversed;
}

int main()
{
    int num;
    cin >> num;

    int reversedNum = reverseInteger(num);
    cout << reversedNum << endl;
    if (num == reversedNum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
