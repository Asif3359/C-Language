#include<iostream>
#include <algorithm>

using namespace std;

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int arr[N];
    int count[M] = {0}; 

    for(int i = 0; i < N; i++) 
    {
        cin >> arr[i];
    }
    
    sort(arr , arr+N);

    for(int i = 0; i < N; i++) 
    {
        count[arr[i] - 1]++; 
    }

    for(int i = 0; i < M; i++) 
    {
        cout << count[i] << endl;
    }

    return 0;
}
