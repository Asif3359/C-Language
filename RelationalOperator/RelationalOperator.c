#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    /*
    Relational Operator .
    (==, >, <, >=, <=, != )
    */
    int a = 10, b = 5; // Initialize variables
    bool eq, neq, get, less, getEq, lessEq;

    eq = a == b;
    neq = a != b;
    get = a > b;
    less = a < b;
    getEq = a >= b;
    lessEq = a <= b;

    if (eq != true)
    {
        printf("EQ      :%d\n", eq);
    }

    printf("neq     :%d\n", neq);
    printf("get     :%d\n", get);
    printf("less    :%d\n", eq);
    printf("getEq   :%d\n", getEq);
    printf("lessEq  :%d\n", lessEq);

    return 0;
}
