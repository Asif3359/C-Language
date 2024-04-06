#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b)
{
    unsigned rs1 = *a + *b;
    unsigned rs2 = *a - *b;


    *a = abs(rs1);
    *b = abs(rs2);
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}