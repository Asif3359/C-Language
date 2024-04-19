#include<iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int N, M;
    cin >> N >> M;

    int arr1[N];
    int arr2[M];

    for(int i = 0; i < N; i++) 
    {
        cin >> arr1[i];
    }
    for(int i = 0; i < M; i++) 
    {
        cin >> arr2[i];
    }

    int j = 0; 

    
    for(int i = 0; i < N && j < M; i++) 
    {
        if(arr1[i] == arr2[j]) {
            j++;
        }
    }

    bool isSubsequence = (j == M);

    if(isSubsequence) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}
