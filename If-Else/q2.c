#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;
    int largest;
    int smallest;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);
    largest = num1;
    if (num2 > largest)
    {
        largest = num2;
    }
    if (num3 > largest)
    {
        largest = num3;
    }
    smallest = num1;
    if (num2 < smallest)
    {
        smallest = num2;
    }
    if (num3 < smallest)
    {
        smallest = num3;
    }
    printf("Largest value is: %d\n", largest);
    printf("Smallest value is: %d\n", smallest);
    return 0;
}
