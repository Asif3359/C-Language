// Data Types
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, sum, sub, multi;
    float div;

    scanf("%d %d", &a, &b);
    sum = a + b;
    sub = a - b;
    multi = a * b;
    div = (float)a / b;

    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%d * %d = %d\n", a, b, multi);
    printf("%d / %d = %0.2f\n", a, b, div);
    return 0;
}