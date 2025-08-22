#include <stdio.h>

int main() {
    float num1, num2;
    float sum, difference, product, quotient;
    
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    
    printf("\nResults:\n");
    printf("Addition: %f + %f = %f\n", num1, num2, sum);
    printf("Subtraction: %f - %f = %f\n", num1, num2, difference);
    printf("Multiplication: %f × %f = %f\n", num1, num2, product);
    printf("Division: %f ÷ %f = %f\n", num1, num2, quotient);
    
    return 0;
}