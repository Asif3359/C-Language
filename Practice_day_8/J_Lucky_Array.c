#include <stdio.h>

int main(int argc, char const *argv[]) {
    int N;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    for (int j = 0; j < N; j++) {
        if (min > arr[j]) {
            min = arr[j];
        }
    }

    int count = 0;
    for (int k = 0; k < N; k++) {
        if (min == arr[k]) {
            count++;
        }
    }

    if (count % 2 == 0) {
        printf("Unlucky\n");
    } else {
        printf("Lucky\n");
    }

    return 0;
}
