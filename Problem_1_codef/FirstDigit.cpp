#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    while (number >= 10) {
        number /= 10;
    }

    if(number%2 == 0)
    {
        cout<<"EVEN"<<endl;
    }
    else
    {
       cout<<"ODD"<<endl; 
    }
    

    return 0;
}
