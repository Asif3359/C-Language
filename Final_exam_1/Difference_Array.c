#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int N;
        scanf("%d", &N);
        int arr_1[N];
        int arr_2[N];

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &arr_1[i]);
        }

        for (int i = 0; i < N; i++)
        {

            arr_2[i] = arr_1[i];
        }

        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (arr_2[i] > arr_2[j])
                {
                    int temp = arr_2[i];
                    arr_2[i] = arr_2[j];
                    arr_2[j] = temp;
                }
            }
        }

        for (int i = 0; i < N; i++)
        {
            printf("%d ", abs(arr_1[i] - arr_2[i]));
        }
        printf("\n");
    }
    return 0;
}
