#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;

    // condition in for loop
    for (i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d -> Even\n", i);
        }
        else
        {
            printf("%d ->Odd\n", i);
        }
    }

    // Break Statement
    printf("For Break Statement :");
    for (i = 1; i < 10; i++)
    {
        //  printf("%d ,", i);
        if (i == 5)
        {
            break;
        }
        printf("%d ,", i);
    }

    // Continue Statement
    printf("\nFor Continue Statement :");
    for (i = 1; i < 10; i++)
    {
        //  printf("%d ,", i);
        if (i == 5)
        {
            continue;
        }
        printf("%d ,", i);
    }

    return 0;
}
