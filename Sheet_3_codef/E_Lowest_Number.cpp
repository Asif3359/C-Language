#include <iostream>
#include <climits> 

using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N+1];

    int minNumber = INT_MAX; 
    int minPosition = -1;    

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        if (A[i] < minNumber)
        {
            minNumber = A[i];
            minPosition = i + 1; 
        }
    }

    cout << minNumber << " " << minPosition << endl;

    return 0;
}
