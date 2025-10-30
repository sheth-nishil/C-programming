#include <stdio.h>

int main()
{
    double length;
    double area;
    double perimeter;
    printf("Enter the side length of the square: ");
    scanf("%lf", &length);
    area = length * length;
    perimeter = 4.0 * length;
    printf("Area of the square: %lf\n", area);
    printf("Perimeter of the square: %lf\n", perimeter);
    return 0;
}
