#include <stdio.h>

int reverse(int x) {
    int reversed = 0;
    
    while (x != 0) {
        int digit = x % 10;  // Extract the last digit
        x /= 10;             // Remove the last digit from the number
        
        // Check for overflow before adding the new digit
        if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7))
            return 0;
        if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && digit < -8))
            return 0;
        
        // Add the digit to the reversed number
        reversed = reversed * 10 + digit;
    }
    
    return reversed;
}

int main() {
    int x;
    printf("Enter a signed 32-bit integer: ");
    scanf("%d", &x);
    
    int reversed = reverse(x);
    printf("Reversed integer: %d\n", reversed);
    
    return 0;
}
