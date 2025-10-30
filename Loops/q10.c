#include <stdio.h>

int main()
{
    int n;
    int i;
    int factorial;
    factorial = 1;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Factorial of negative number is not defined.\n");
    }
    else
    {
        for (i = 1; i <= n; i = i + 1)
        {
            factorial = factorial * i;
        }
        printf("Factorial of %d is: %d\n", n, factorial);
    }
    return 0;
}
