#include <stdio.h>

int main()
{
    int n;
    int i;
    int even_number;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i = i + 1)
    {
        even_number = 2 * i;
        printf("%d\n", even_number);
    }
    return 0;
}
