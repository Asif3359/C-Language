#include <stdio.h>
int main()
{
    float i;
    int n;
    printf("Enter N : ");
    scanf("%d", &n);
    for (i = 0.0; i < n+1; i=i+0.01)
    {
        printf("%f \n", i);
    }

    return 0;
}