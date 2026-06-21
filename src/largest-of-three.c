#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3)
    {
        printf("Error: Invalid input. Please enter three integers.\n");
        return 1;
    }

    if (a >= b && a >= c)
    {
        printf("Largest number is: %d\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("Largest number is: %d\n", b);
    }
    else
    {
        printf("Largest number is: %d\n", c);
    }

    return 0;
}
