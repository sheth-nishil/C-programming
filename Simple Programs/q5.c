#include <stdio.h>

int main()
{
    double a;
    double b;
    double sum;
    double difference;
    double product;
    double quotient;
    printf("Enter the first number: ");
    scanf("%lf", &a);
    printf("Enter the second number: ");
    scanf("%lf", &b);
    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;
    printf("Sum: %lf\n", sum);
    printf("Difference: %lf\n", difference);
    printf("Product: %lf\n", product);
    printf("Quotient: %lf\n", quotient);
    return 0;
}
