#include <stdio.h>

int main()
{
    int n;
    int i;
    int odd_number;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i = i + 1)
    {
        odd_number = 2 * i - 1;
        printf("%d\n", odd_number);
    }
    return 0;
}
