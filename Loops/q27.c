#include <stdio.h>

int main()
{
    int number;
    int i;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("Factors of %d are:\n", number);
    for (i = 1; i <= number; i = i++)
    {
        if (number % i == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
