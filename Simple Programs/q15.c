#include <stdio.h>

int main()
{
    double fahrenheit;
    double celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);
    celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
    printf("Temperature in Celsius: %lf\n", celsius);
    return 0;
}
