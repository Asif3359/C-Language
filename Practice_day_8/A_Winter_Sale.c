#include <stdio.h>

int main() {
    int X, P;
    scanf("%d %d", &X, &P);

    float b = (100.0 - X) / 100.0; 
    float result = (float) P / b; 

    printf("%.2f\n", result);

    return 0;
}
