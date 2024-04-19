#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    long long int arr1[N];
    long long int arr2[N];

    for (int i = 0; i < N; i++) {
        cin >> arr1[i];
        if(i==0)
        {
            arr2[i]=arr1[i];
        }
        else
        {
           arr2[i]=arr1[i]+arr2[i-1]; 
        }
    }

    for (int i = 0; i < M; i++) {

        int str , end ;
        cin >> str >> end;
        str--;
        end--;
        long long int sum = arr2[end]-arr2[str] + arr1[str];
        cout << sum<<endl;
    }

    return 0;
}
