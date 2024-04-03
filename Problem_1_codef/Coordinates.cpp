#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    double X, Y;
    cin >> X >> Y;

    if (X > 0 && Y > 0)
    {
        // q1
        cout << "Q1" << endl;
    }
    if (X < 0 && Y > 0)
    {
        // q2
        cout << "Q2" << endl;
    }
    if (X < 0 && Y < 0)
    {
        // q3
        cout << "Q3" << endl;
    }
    if (X > 0 && Y < 0)
    {
        // q4
        cout << "Q4" << endl;
    }
    if (X == 0 && Y == 0)
    {
        // origim
        cout << "Origem" << endl;
    }
    if (X == 0 && (Y > 0 || Y < 0))
    {
        // Y
        cout << "Eixo Y" << endl;
    }
    if ((X > 0 || X < 0) && Y == 0)
    {
        // x
        cout << "Eixo X" << endl;
    }

    return 0;
}
