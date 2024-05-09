#include <iostream>
using namespace std;

int pizzaCut(int n)
{
    int cut = 0;
    int sl = 1;

    while (sl < n)
    {
        cut++;
        sl = sl + cut;
    }
    return cut;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int cut = pizzaCut(n);
        cout << cut << endl;
    }
    return 0;
}