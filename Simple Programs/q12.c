#include <stdio.h>

int main()
{
    double kilograms;
    double grams;
    printf("Enter weight in kilograms: ");
    scanf("%lf", &kilograms);
    grams = kilograms * 1000.0;
    printf("Weight in grams: %lf\n", grams);
    return 0;
}
