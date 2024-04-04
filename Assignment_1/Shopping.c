#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long long int M;
    scanf("%lld", &M);

    if (M > 1000)
    {
        printf("I will buy Punjabi\n");
        int AfterBuy = M - 1000;
        if (AfterBuy >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else
    {
        printf("Bad luck!\n");
    }

    return 0;
}
