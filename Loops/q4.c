#include <stdio.h>

int main()
{
    int n;
    int i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i = i + 1)
    {
        printf("%d\n", i);
    }
    return 0;
}
