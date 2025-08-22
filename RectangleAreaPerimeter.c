#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;
    
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    
    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);
    
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    
    printf("Area of rectangle = %f\n", area);
    printf("Perimeter of rectangle = %f\n", perimeter);
    
    return 0;
}