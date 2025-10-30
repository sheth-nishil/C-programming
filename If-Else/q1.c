#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int largest;
    int smallest;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        largest = num1;
        smallest = num2;
    }
    else
    {
        largest = num2;
        smallest = num1;
    }
    printf("Largest value is: %d\n", largest);
    printf("Smallest value is: %d\n", smallest);
    return 0;
}
