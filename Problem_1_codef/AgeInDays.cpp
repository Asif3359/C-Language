#include <iostream>

using namespace std;

int main()
{
    long long number_of_days, years, months, days;

    cin >> number_of_days;

    /* Calculating years */
    years = number_of_days / 365;

    // Calculating months
    months = (number_of_days - years * 365) / 30;

    // Calculating days
    days = (number_of_days - years * 365 - months * 30);

    // 1 years 1 months 5 days

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}