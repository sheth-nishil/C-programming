#include <stdio.h>

int main()
{
    int number;
    int reversed_number;
    int remainder;
    int original_number;
    reversed_number = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    original_number = number;
    while (number != 0)
    {
        remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number = number / 10;
    }
    printf("Reverse of %d is: %d\n", original_number, reversed_number);
    return 0;
}
