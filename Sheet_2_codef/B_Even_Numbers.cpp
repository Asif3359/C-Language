#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    bool found_even = false;

    for (int i = 2; i <= N; i += 2)
    {
        cout << i << endl;
        found_even = true;
    }
    if (!found_even)
    {
        cout << -1 << endl;
    }

    return 0;
}
