#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N;

    scanf("%d", &N);

    int size = 2 * N - 1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int x, y;

            if (i < N)
            {
                x = i;
            }
            else
            {
                x = size - i - 1;
            }

            if (j < N)
            {
                y = j;
            }
            else
            {
                y = size - j - 1;
            }
            int value;
            if (x < y)
            {
                value = x;
            }
            else
            {
                value = y;
            }
            printf("%d ", N - value);
        }
        printf("\n");
    }

    return 0;
}
