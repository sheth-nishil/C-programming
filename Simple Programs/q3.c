#include <stdio.h>

int main()
{
    int a;
    int b;
    int product;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    product = a * b;
    printf("The product is: %d\n", product);
    return 0;
}
