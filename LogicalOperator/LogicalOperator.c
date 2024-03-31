#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    /*
    Logical Operator .
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

    printf("neq     :%d\n", neq);
    printf("get     :%d\n", get);
    printf("less    :%d\n", eq);
    printf("getEq   :%d\n", getEq);
    printf("lessEq  :%d\n", lessEq);

    bool logicalAnd, logicalOr;

    logicalAnd = eq && neq;
    logicalOr = eq || neq;

    printf("logicalAnd     :%d\n", logicalAnd);
    printf("logicalOr      :%d\n", logicalOr);

    return 0;
}
