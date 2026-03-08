#include <stdio.h>
#include <math.h> // Required for sqrt()

int main()
{
    int n, i;
    int isPrime = 0; // Flag: 0 means prime, 1 means not prime

    printf("Enter any number: ");
    scanf("%d", &n);

    // Numbers less than 2 are not prime
    if (n < 2)
    {
        isPrime = 1;
    }
    else if (n == 2)
    {
        isPrime = 0; // 2 is a prime number
    }
    else
    {
        // Check for any divisor from 2 to sqrt(n)
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                isPrime = 1; // Found a divisor — not prime
                break;
            }
        }
    }

    if (isPrime)
    {
        printf("%d is not a prime number\n", n);
    }
    else
    {
        printf("%d is a prime number\n", n);
    }

    return 0;
}
