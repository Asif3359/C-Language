#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int N;
    cin >> N;

    int count = 1 ;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<"PUM"<<endl;
        count++;
    }
    
    return 0;
}
