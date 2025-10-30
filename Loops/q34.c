#include <stdio.h>

int main()
{
    int n;
    int i;
    int a = 1;
    int b = 1;
    int next_term;
    printf("Enter the number of Fibonacci terms (n): ");
    scanf("%d", &n);
    if (n >= 1)
    {
        printf("%d\n", a);
    }
    if (n >= 2)
    {
        printf("%d\n", b);
    }
    for (i = 3; i <= n; i = i + 1)
    {
        next_term = a + b;
        printf("%d\n", next_term);
        a = b;
        b = next_term;
    }
    return 0;
}
