#include <stdio.h>

int main() {
    int gross_sales, discount;
    int net_sales;
    printf("Enter gross sales: ");
    scanf("%d", &gross_salary);

    if (gross_salary > 20000) {
        discount = 0.15*gross_sales;
    }
    else if (gross_salary > 10000) {
        discount = 0.10*gross_sales;
    }
    else {
        discount = 0.05*gross_sales;
    }

    net_sales = gross_sales - discount
    printf("Net Sales: %d", net_sales);
    return 0;
}
