#include <stdio.h>

int main() {
    float grams;
    float kilograms;
    
    printf("Enter weight in grams: ");
    scanf("%f", &grams);
    
    kilograms = grams / 1000;
    printf("%f grams = %f kilograms\n", grams, kilograms);
    
    return 0;
}