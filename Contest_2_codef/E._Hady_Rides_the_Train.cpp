
#include <iostream>
using namespace std;

int main()
{
    int seat;
    cin >> seat;

    // Calculate row number
    int row = seat / 4;

    // Calculate column number
    int column;
    if (row % 2 == 0)
    {
        column = seat % 4;
    }
    else
    {
        column = 3 - (seat % 4);
    }

    cout << row << " " << column << endl;

    return 0;
}
