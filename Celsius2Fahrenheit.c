#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (9.0/5.0) * celsius + 32;
    printf("%f°C = %f°F\n", celsius, fahrenheit);
    
    return 0;
}