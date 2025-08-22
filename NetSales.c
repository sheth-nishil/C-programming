#include <stdio.h>

int main() {
    float gross_sales, discount, net_sales;
    
    printf("Enter gross sales amount: ₹");
    scanf("%f", &gross_sales);
    
    discount = gross_sales * 0.10;
    net_sales = gross_sales - discount;
    
    printf("\nSales Details:\n");
    printf("Gross Sales: ₹%f\n", gross_sales);
    printf("Discount: ₹%f\n", discount);
    printf("Net Sales: ₹%f\n", net_sales);
    
    return 0;
}