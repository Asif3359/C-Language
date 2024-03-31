#include <stdio.h>

int main(int argc, char const *argv[])
{

    int sum, sub, multi,mod, a, b;
    float div;
    printf("Enter Two Integer Number :");
    scanf("%d %d", &a, &b);

    // (+) (addition)
    sum = a + b;
    printf("Sum = (%d + %d ) = %d", a, b, sum);

    // (-) (Subtractor)
    sub = a - b;
    printf("\nSub = (%d - %d ) = %d", a, b, sub);

    // (*) (Multiplication)
    multi = a * b;
    printf("\nMulti = (%d * %d ) = %d", a, b, multi);

    // (/) (division)
    div = (float)a / (float)b;
    printf("\nDiv = (%d / %d ) = %.2f", a, b, div);

    // (%) (Modules)
    mod = a % b;
    printf("\nMod = (%d %% %d ) = %d", a, b, mod);

    return 0;
}
