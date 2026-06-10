#include <stdio.h>

int main()
{
    int n, i;
    int isPrime = 1;

    printf("Enter any number: ");
    if (scanf("%d", &n) != 1)
    {
        printf("Error: Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (n < 2)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}
