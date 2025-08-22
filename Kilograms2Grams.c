#include <stdio.h>

int main() {
    float kilograms;
    float grams;
    
    printf("Enter weight in kilograms: ");
    scanf("%f", &kilograms);
    
    grams = kilograms * 1000;
    printf("%f kilograms = %f grams\n", kilograms, grams);
    
    return 0;
}