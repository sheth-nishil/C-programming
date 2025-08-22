#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    celsius = (5.0/9.0) * (fahrenheit - 32);
    printf("%f°F = %f°C\n", fahrenheit, celsius);
    
    return 0;
}