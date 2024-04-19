#include <stdio.h>

// Function to find the GCD of two numbers using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1 , num2 ;
    char ch;
    scanf("%d %c %d",&num1,&ch, &num2);

    int result = gcd(num1, num2);

    if(num2/result == 1)
    {
        printf("%d\n", num1/result);
    }
    else
    {
        printf("%d%c%d\n", num1/result,ch, num2/result);
    }

    return 0;
}
