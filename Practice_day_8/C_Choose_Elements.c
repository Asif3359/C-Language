#include <stdio.h>

void selectionSort(long long int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                long long int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int N, K;
    scanf("%d %d", &N, &K);

    long long int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &arr[i]);
    }

    selectionSort(arr, N);

    if (K == 1)
    {
        printf("%lld\n", arr[0]);
        return 0;
    }
    else
    {
        long long int sum = 0;
        for (int i = 0; i < K; i++)
        {
            if (arr[i] < 0)
            {
                break;
            }
            sum += arr[i];
        }
        printf("%lld\n", sum);
    }

    return 0;
}
