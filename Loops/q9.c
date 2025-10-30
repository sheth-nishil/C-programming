#include <stdio.h>

int main()
{
    int n;
    int i;
    int even_number;
    int sum;
    sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i = i + 1)
    {
        even_number = 2 * i;
        sum = sum + even_number;
    }
    printf("Sum of first %d even numbers is: %d\n", n, sum);
    return 0;
}
