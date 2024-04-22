#include <iostream>
using namespace std;

int main() {
    int a;
    // Do not print anything before taking input
    cin >> a;
    
    int rev = 0 ;
    while(a>=0)
    {
        int digit = a%10;
        a = a/10;
        rev = rev * 10 + digit;
    }

    cout<< rev << endl;
    
}