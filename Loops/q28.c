#include <stdio.h>

int main()
{
    int number;
    int i;
    int sum_of_factors;
    sum_of_factors = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number <= 1)
    {
        printf("%d is not a perfect number.\n", number);
        return 0;
    }
    for (i = 1; i <= number / 2; i = i++)
    {
        if (number % i == 0)
        {
            sum_of_factors = sum_of_factors + i;
        }
    }
    if (sum_of_factors == number)
    {
        printf("%d is a perfect number.\n", number);
    }
    else
    {
        printf("%d is not a perfect number.\n", number);
    }
    return 0;
}
