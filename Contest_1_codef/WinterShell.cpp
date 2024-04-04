#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double originalPrice(int X, int P) {
    double original_price = (100.0 / (100 - X)) * P;
    return round(original_price * 100)/100; 
}

int main() {
    int X, P;
    cin >> X >> P;

    double original_price = originalPrice(X, P);

    cout << fixed << setprecision(2) << original_price << endl;

    return 0;
}
