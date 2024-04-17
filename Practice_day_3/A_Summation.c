#include <stdio.h>

int main()
{
    int arr[100000];

    int T;
    scanf("%d", &T);

    long long int sum = 0;

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i]; // Add the number to the sum
    }

    if (sum < 0)
        sum = -sum;

    printf("%lld\n", sum);

    return 0;
}
