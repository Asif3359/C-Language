#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1;

    while (i <= 10)
    {
        printf("%d, ", i);
        i++;
    }
    printf("\n");
    int j = 1;
    do
    {
        printf("%d, ", j);
        j++;
    } while (j < 1);

    int m = 0;
    while (m < 3)
    {
        m++;
    }
    printf("%d", m);

    return 0;
}
