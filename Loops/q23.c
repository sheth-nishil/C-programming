#include <stdio.h>

int main()
{
    int number;
    int sum;
    int remainder;
    int original_number;
    sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    original_number = number;
    while (number != 0)
    {
        remainder = number % 10;
        sum = sum + remainder;
        number = number / 10;
    }
    printf("Sum of digits of %d is: %d\n", original_number, sum);
    return 0;
}
