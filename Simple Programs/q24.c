#include <stdio.h>

int main()
{
    int a;
    int b;
    int temp;
    printf("Enter the first value (a): ");
    scanf("%d", &a);
    printf("Enter the second value (b): ");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
