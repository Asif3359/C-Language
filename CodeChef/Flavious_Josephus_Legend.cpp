#include<iostream>

using namespace std;

int jose (int N , int K)
{
    int survivor = 0 ;

    for(int i = 2 ; i<=N ; i++)
    {
        survivor = (survivor + K)%i;
    }

    return survivor+1;
}

int main(int argc, char const *argv[])
{
    int NC ;
    cin >> NC;
    for (int i = 1; i <= NC; ++i) 
    {
        int N , K ;
        cin >> N >> K ;
        int survivor = jose(N,K);
        cout << "Case " << i << ": " << survivor << endl;
    }
    return 0;
}



