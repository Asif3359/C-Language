#include <iostream>
#include <vector>

using namespace std;

bool isLucky(int num)
{
    while (num > 0)
    {
        int digit = num % 10;
        if (digit != 4 && digit != 7)
        {
            return false;
        }
        num = num / 10;
    }

    return true;
}

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    vector<int> luckyNumbers;

    for (int i = n; i <= m; i++)
    {
        if (isLucky(i))
        {
            luckyNumbers.push_back(i);
        }
    }

    if (luckyNumbers.empty())
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < luckyNumbers.size(); i++)
        {
            cout << luckyNumbers[i] << " ";
        }
    }

    return 0;
}
