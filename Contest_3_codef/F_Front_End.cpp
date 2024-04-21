#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n; 

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    int start = 0; 
    int end = n - 1; 

    while (start <= end) {
        cout << arr[start++] << " "; 
        if (start <= end) {
            cout << arr[end--] << " "; 
        }
    } 

    return 0;
}
