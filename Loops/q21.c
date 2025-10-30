#include <stdio.h>

int main()
{
    int number;
    int digit;
    int temp_number;
    int reverse_number;
    reverse_number = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    temp_number = number;
    while (temp_number > 0)
    {
        digit = temp_number % 10;
        reverse_number = reverse_number * 10 + digit;
        temp_number = temp_number / 10;
    }
    printf("Digits in reverse order:\n");
    temp_number = reverse_number;
    while (temp_number > 0)
    {
        digit = temp_number % 10;
        printf("%d\n", digit);
        temp_number = temp_number / 10;
    }
    return 0;
}
