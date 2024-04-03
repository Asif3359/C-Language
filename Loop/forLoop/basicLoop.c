#include <stdio.h>
#include <stdbool.h>

void SieveOfEratosthenes(int number)
{
    bool isPrime[number + 1];
    int i, j;

    for (i = 2; i <= number; i++)
    {
        isPrime[i++] = true;
    }

    for (i = 2; i * i <= number; i++)
    {
        if (isPrime[i])
        {
            for (j = i * i; j <= number; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
    printf("\nPrime numbers between 1 and 100: ");
    for (i = 2; i <= number; i++)
    {
        if (isPrime[i])
        {
            printf("%d, ", i);
        }
    }
}

int main(int argc, char const *argv[])
{
    int i;
    int n;

    printf("Enter Your Number : ");
    scanf("%d", &n);

    // print hello world 3 times (use loop)
    for (i = 1; i <= 3; i++)
    {
        printf("Hello World \n");
    }

    // print positive integer (use loop)
    printf("\nPositive integers: ");
    for (i = 1; i <= n; i++)
    {
        printf("%d, ", i);
    }

    // print positive integer in reverse order (use loop)
    printf("\nPositive integers in Reverse Order: ");
    for (i = n; i >= 1; i--)
    {
        printf("%d, ", i);
    }

    // print odd integers (use loop)
    printf("\nOdd integers: ");
    for (i = 1; i <= n; i = i + 2)
    {
        printf("%d, ", i);
    }

    // print even integers (use loop)
    printf("\nEven integers: ");
    for (i = 2; i <= n; i = i + 2)
    {
        printf("%d, ", i);
    }

    // print Sum of integers
    printf("\nSum of integers: ");
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);

    // print multi of integers
    printf("\nMultiplication of integers: ");
    int multi = 1;
    for (i = 1; i <= n; i++)
    {
        multi = multi * i;
    }
    printf("%d", multi);

    // print multi of n
    printf("\nMultiplication of %d: ", n);
    int multiN = 1;
    for (i = 1; i <= 10; i++)
    {
        multiN = n * i;
        printf("%d, ", multiN);
    }

    // Multiplication Table
    int k, j, mul;
    printf("\n\nMultiplication Table: ");
    for (k = 1; k <= 10; k++)
    {
        printf("\nTable of %d: ", k);
        for (j = 1; j <= 10; j++)
        {
            mul = k * j;
            printf("%5d", mul); // %5d ensures each number takes up 5 characters
        }
    }
    int number = 100;

    SieveOfEratosthenes(number);

    return 0;
}
