#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double A, B, C;
    const double pi = 3.14159;

    cin >> A >> B >> C;

    double area_triangle = (A * C) / 2.0;
    double area_circle = pi * C * C;
    double area_trapezium = ((A + B) * C) / 2.0;
    double area_square = B * B;
    double area_rectangle = A * B;

    cout << "TRIANGULO: " << fixed << setprecision(3) << area_triangle << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << area_circle << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << area_trapezium << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << area_square << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << area_rectangle << endl;

    return 0;
}
