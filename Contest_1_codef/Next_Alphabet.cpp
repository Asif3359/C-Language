#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    char ch;
    cin >> ch;

    if (ch == 'z')
    {
        char res = ch - 25;
        cout << res << endl;
    }
    else
    {
        char res = ch + 1;
        cout << res << endl;
    }

    return 0;
    // 123
}
