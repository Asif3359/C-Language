#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N;

    scanf("%d", &N);

    int size = N * 2 - 1;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int x, y;

            if (i > N)
            {
                x = i;
            }
            else
            {
                x = size - i - 1;
            }
            int value;
            if (x > N)
            {
                value = x ;
            }
            else
            {
               value = y ;
            }

            // if(x)
        }
    }

    return 0;
}
