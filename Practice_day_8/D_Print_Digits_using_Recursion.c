#include <stdio.h>

void printDigit(int num)
{
    if (num == 0)
        return;

    int digit = num % 10;

    printDigit(num / 10);

    printf("%d ", digit);
}

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int num;
        scanf("%d", &num);
        if (num == 0)
        {
            printf("0 ");
        }
        printDigit(num);
        printf("\n");
    }

    return 0;
}