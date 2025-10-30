#include <stdio.h>

int main()
{
    double celsius;
    double fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = (9.0 / 5.0 * celsius) + 32.0;
    printf("Temperature in Fahrenheit: %lf\n", fahrenheit);
    return 0;
}
