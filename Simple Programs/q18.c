#include <stdio.h>

int main()
{
    double length;
    double breadth;
    double area;
    double perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%lf", &breadth);
    area = length * breadth;
    perimeter = 2.0 * (length + breadth);
    printf("Area of the rectangle: %lf\n", area);
    printf("Perimeter of the rectangle: %lf\n", perimeter);
    return 0;
}
