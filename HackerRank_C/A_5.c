#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;
    int temp = abs(n); // Use abs() to handle negative numbers

    while (temp > 0)
    {
        int digit = temp % 10; // Extract the last digit
        sum += digit;          // Add the digit to the sum
        temp /= 10;            // Remove the last digit
    }

    printf("%d", sum);

    return 0;
}
