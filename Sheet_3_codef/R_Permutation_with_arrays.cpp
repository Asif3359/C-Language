#include<iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int N ;
    cin >> N ;

    int A[N];
    int B[N];

    for(int i = 0 ; i<N ; i++)
    {
        cin>> A[i];
    }
    for(int i = 0 ; i<N ; i++)
    {
        cin>> B[i];
    }

    sort(A , A+N);
    sort(B , B+N);

    bool isParmutation = true ;
    for(int i = 0 ; i<N ; i++)
    {
        if(A[i] != B[i])
        {
          isParmutation =  false ;
          break ;
        }
    }

    if(isParmutation)
    {
        cout << "yes" << "\n";
    }
    else 
    {
       cout << "no" << "\n"; 
    }
    
    return 0;
}


