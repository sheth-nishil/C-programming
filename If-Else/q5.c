#include <stdio.h>

int main()
{
    float gross_sales;
    float discount_rate;
    float discount_amount;
    float net_sales;
    printf("Enter Gross Sales: ");
    scanf("%f", &gross_sales);
    if (gross_sales > 20000.0)
    {
        discount_rate = 0.15;
    }
    else if (gross_sales > 10000.0)
    {
        discount_rate = 0.10;
    }
    else
    {
        discount_rate = 0.05;
    }
    discount_amount = gross_sales * discount_rate;
    net_sales = gross_sales - discount_amount;
    printf("Gross Sales: %f\n", gross_sales);
    printf("Discount Rate: %f\n", discount_rate);
    printf("Discount Amount: %f\n", discount_amount);
    printf("Net Sales: %f\n", net_sales);
    return 0;
}
