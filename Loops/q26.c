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
        sum = sum + remainder * remainder * remainder;
        number = number / 10;
    }
    if (original_number == sum)
    {
        printf("%d is an Armstrong number.\n", original_number);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", original_number);
    }
    return 0;
}
