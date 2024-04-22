#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

int main() {
    int distance;
    double fuel;

    cin >> distance >> fuel;

    double consumption = distance / fuel;

    cout << fixed << setprecision(3) << consumption << " km/l" << endl;

    return 0;
}
