#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N + 1];
    int Number;

    for (int i = 0; i < N; i++) {
        scanf("%d", &Number);
        arr[i] = Number;
    }
    for (int i = N - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
