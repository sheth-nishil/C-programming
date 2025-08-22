#include <stdio.h>

int main() {
    float side, area, perimeter;
    
    printf("Enter side length of square: ");
    scanf("%f", &side);
    
    area = side * side;
    perimeter = 4 * side;
    
    printf("Area of square = %f\n", area);
    printf("Perimeter of square = %f\n", perimeter);
    
    return 0;
}