#include <stdio.h>

int main()
{
    double grams;
    double kilograms;
    printf("Enter weight in grams: ");
    scanf("%lf", &grams);
    kilograms = grams / 1000.0;
    printf("Weight in kilograms: %lf\n", kilograms);
    return 0;
}
