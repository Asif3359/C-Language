#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;

    int arr1[n];
    int arr2[m];

    int position = -1;
    for (int i = 0; i < n + m; i++)
    {
        if (s[i] == '-')
        {
            position = i;
            break;
        }
    }
    if (position != n || s.size() != n + m + 1)
    {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i < n + m + 1; i++)
    {
        if (i == position)
        {
            continue;
        }
        if (!isdigit(s[i]))
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}
