#include <stdio.h>

int main()
{
    int n;
    int i;
    printf("Enter the number of times to print the name: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i = i + 1)
    {
        printf("My Name\n");
    }
    return 0;
}
