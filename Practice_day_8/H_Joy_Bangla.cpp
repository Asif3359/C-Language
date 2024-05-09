#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = 2 * acos(0.0);

double minCer(int N)
{
    double maxD = 0;
    for (int i = 0; i < N; ++i)
    {
        int x, y;
        cin >> x >> y;
        double dist = sqrt(x * x + y * y);
        maxD = max(maxD, dist);
    }
    return 2 * PI * maxD;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        double circumference = minCer(N);
        cout << fixed << setprecision(6) << circumference << endl;
    }

    return 0;
}
