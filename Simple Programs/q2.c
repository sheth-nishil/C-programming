#include <stdio.h>

int main()
{
    int a;
    int b;
    int difference;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    difference = a - b;
    printf("The difference is: %d\n", difference);
    return 0;
}
