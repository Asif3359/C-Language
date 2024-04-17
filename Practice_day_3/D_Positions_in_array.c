#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    int A[T]; 

    for (int i = 0; i < T; i++) {
        scanf("%d", &A[i]); 
    }

    for (int i = 0; i < T; i++) {
        if (A[i] <= 10) {
            printf("A[%d] = %d\n", i, A[i]);
        }
    }

    printf("\n");

    return 0;
}
