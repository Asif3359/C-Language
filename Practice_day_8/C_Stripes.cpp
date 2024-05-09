#include <iostream>

using namespace std;

char lastColor(char arr[8][8])
{
    char lastColor = ' ';

    // Check rows
    for (int i = 0; i < 8; i++)
    {
        bool hasRed = false, hasBlue = false;
        for (int j = 0; j < 8; j++)
        {
            if (arr[i][j] == 'R')
            {
                hasRed = true;
            }
            else if (arr[i][j] == 'B')
            {
                hasBlue = true;
            }
        }
        if (hasRed && !hasBlue)
        {
            lastColor = 'R';
        }
        else if (!hasRed && hasBlue)
        {
            lastColor = 'B';
        }
    }

    // Check columns
    for (int j = 0; j < 8; j++)
    {
        bool hasRed = false, hasBlue = false;
        for (int i = 0; i < 8; i++)
        {
            if (arr[i][j] == 'R')
            {
                hasRed = true;
            }
            else if (arr[i][j] == 'B')
            {
                hasBlue = true;
            }
        }
        if (hasRed && !hasBlue)
        {
            lastColor = 'R';
        }
        else if (!hasRed && hasBlue)
        {
            lastColor = 'B';
        }
    }

    return lastColor;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    while (t--)
    {
        char arr[8][8];

        for (int i = 0; i < 8; ++i)
        {
            for (int j = 0; j < 8; ++j)
            {
                cin >> arr[i][j];
            }
        }
        char result = lastColor(arr);
        cout << result << endl;
    }

    return 0;
}
