#include <stdio.h>

int main()
{
    int number;
    int temp_number;
    int square;
    int power_of_10 = 1;
    printf("Enter an integer: ");
    scanf("%d", &number);
    temp_number = number;
    square = number * number;
    while (temp_number > 0)
    {
        power_of_10 = power_of_10 * 10;
        temp_number = temp_number / 10;
    }
    if (square % power_of_10 == number)
    {
        printf("%d is an automorphic number (Square: %d).\n", number, square);
    }
    else
    {
        printf("%d is not an automorphic number (Square: %d).\n", number, square);
    }
    return 0;
}
