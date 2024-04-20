#include <iostream>
#include <algorithm>

using namespace std;

int binarySearch(int str, int end, int arr[], int key) 
{
    while (str <= end) 
    {
        int mid = str + (end - str) / 2;

        if (arr[mid] == key) 
        {
            return mid;
        } 
        else if (key < arr[mid]) 
        {
            end = mid - 1;
        }
        else // if (key > arr[mid])
        {  
            str = mid + 1;
        }
    }
    return -1;
}

int main(int argc, char const* argv[]) {
    int N, M;
    cin >> N >> M;
    int arr[N];

    for (int i = 0; i < N; i++) 
    {
        cin >> arr[i];
    }

    sort(arr, arr + N); // Sort the array only once before processing queries

    for (int i = 0; i < M; i++) {
        int q;
        cin >> q;
        int result = binarySearch(0, N - 1, arr, q);
        if (result == -1) 
        {
            cout << "not found\n";
        } 
        else 
        {
            cout << "found\n";
        }
    }

    return 0;
}
