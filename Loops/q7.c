#include <stdio.h>

int main()
{
    int n;
    int i;
    int sum;
    sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i = i + 1)
    {
        sum = sum + i;
    }
    printf("Sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}
