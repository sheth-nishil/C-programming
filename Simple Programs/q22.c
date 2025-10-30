#include <stdio.h>

int main()
{
    double gross_sales;
    double discount;
    double net_sales;
    printf("Enter Gross Sales: ");
    scanf("%lf", &gross_sales);
    discount = gross_sales * 0.10;
    net_sales = gross_sales - discount;
    printf("Discount (10%%): %lf\n", discount);
    printf("Net Sales: %lf\n", net_sales);
    return 0;
}
