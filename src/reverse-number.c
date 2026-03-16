#include <stdio.h>

int main()
{
    int num, reversed = 0, remainder;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1)
    {
        printf("Error: Invalid input. Please enter an integer.\n");
        return 1;
    }

    int sign = 1;
    if (num < 0)
    {
        sign = -1;
        num = -num;
    }

    while (num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number: %d\n", sign * reversed);

    return 0;
}
