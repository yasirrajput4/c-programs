#include <stdio.h>

int sumOfDigits(int num)
{
    if (num < 0)
        num = -num;
    if (num == 0)
        return 0;
    return (num % 10) + sumOfDigits(num / 10);
}

int main()
{
    int number;

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1)
    {
        printf("Error: Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Sum of digits = %d\n", sumOfDigits(number));

    return 0;
}
