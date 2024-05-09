#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int N ;
    cin >> N ;

    if(N>=48 && N<=50)
    {
        cout<<"Probin\n";
    }
    else if(N>=51 && N<=53)
    {
        cout<<"Nobin\n";
    }
    else
    {
         cout<<"Bohiragoto\n";
    }
    
    
    return 0;
}


