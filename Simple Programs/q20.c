#include <stdio.h>

int main()
{
    double height;
    double base;
    double area;
    printf("Enter the height of the triangle: ");
    scanf("%lf", &height);
    printf("Enter the base length of the triangle: ");
    scanf("%lf", &base);
    area = height * base / 2.0;
    printf("Area of the triangle: %lf\n", area);
    return 0;
}
