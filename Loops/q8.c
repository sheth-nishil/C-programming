#include <stdio.h>

int main()
{
    int n;
    int i;
    int odd_number;
    int sum;
    sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i = i + 1)
    {
        odd_number = 2 * i - 1;
        sum = sum + odd_number;
    }
    printf("Sum of first %d odd numbers is: %d\n", n, sum);
    return 0;
}
