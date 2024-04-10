#include <iostream>
#include <climits>

bool isPalindrome(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (right > left)
    {
        if (arr[left] != arr[right])
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N];
    int Number;

    for (int i = 0; i < N; i++)
    {
        cin >> Number;
        arr[i] = Number;
    }
    bool palindrome = isPalindrome(arr, N);
    
    if(palindrome)
    {
        cout<<"YES"<<endl ;
    }
    else
    {
        cout<< "NO"<<endl;
    }
    
    return 0;
}
