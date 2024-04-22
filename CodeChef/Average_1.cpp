#include <iostream>
#include <iomanip> 
using namespace std;

int main() {

    double A, B, average;

    cin >> A >> B;

    average = ((A * 3.5) + (B * 7.5)) / (3.5 + 7.5);

    cout << "MEDIA = " << fixed << setprecision(5) << average << endl;

    return 0;
}
