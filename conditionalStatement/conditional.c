#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter Your Number :");
    int num;
    scanf("%d", &num);

    if (num > 100)
    {
        printf("Invalid");
    }
    else if (num <= 100 && num >= 80)
    {
        printf("A+");
    }
    else if (num < 80 && num >= 70)
    {
        printf("A");
    }
    else
    {
         printf("Null");
    }

    return 0;
}
