#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);
    int A[N];

    int minNumber = INT_MAX; 
    int minPosition = -1;    

    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &A[i]);
        if (A[i] < minNumber)
        {
            minNumber = A[i];
            minPosition = i + 1; 
        }
    }

    printf("%d %d\n", minNumber, minPosition);

    return 0;
}
