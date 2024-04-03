#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int left_boundary = max(l1, l2);
    int right_boundary = min(r1, r2);

    if (left_boundary <= right_boundary)
    {
        cout << left_boundary << " " << right_boundary << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
