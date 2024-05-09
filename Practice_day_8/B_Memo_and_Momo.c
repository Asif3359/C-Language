#include <stdio.h>
 
int main() {
    long long int X, Y, K;
    scanf("%lld %lld %lld", &X, &Y, &K);
 
    if ((X % K == 0) && (Y % K == 0)) {
        printf("Both\n");
    }
    if ((X % K == 0) && (Y % K != 0)) {
        printf("Memo\n");
    }
    if ((X % K != 0) && (Y % K == 0)) {
        printf("Momo\n");
    }
    if ((X % K != 0) && (Y % K != 0)) {
        printf("No One\n");
    }
 
    return 0;
}