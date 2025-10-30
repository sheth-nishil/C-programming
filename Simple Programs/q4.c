#include <stdio.h>

int main()
{
    double a;
    double b;
    double quotient;
    printf("Enter the numerator: ");
    scanf("%lf", &a);
    printf("Enter the denominator: ");
    scanf("%lf", &b);
    quotient = a / b;
    printf("The quotient is: %lf\n", quotient);
    return 0;
}
