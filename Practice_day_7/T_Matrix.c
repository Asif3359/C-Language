#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum1 = sum1 + arr[i][i];
            }
            if (i + j == n - 1)
            {
                sum2 = sum2 + arr[i][j];
            }
        }
    }

    long long int result = sum1-sum2;
    if(result<0)
    {
        result = - result;
    }

    printf("%lld\n",result);
    

    return 0;
}
