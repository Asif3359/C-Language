#include <stdio.h>
#include <stdbool.h>

bool isBeautiful(int n) {
    bool digits[10] = {false}; // Array to store whether each digit has been encountered

    // Iterate through each digit of the year
    while (n > 0) {
        int digit = n % 10; // Extract the last digit
        if (digits[digit]) {
            return false; // If this digit has been encountered before, return false
        }
        digits[digit] = true; // Mark this digit as encountered
        n = n / 10; // Move to the next digit
    }

    return true; // If loop completes without returning false, all digits are distinct
}

int main() {
    int n;
    scanf("%d", &n);

    if (isBeautiful(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
