#include <stdio.h>

int main() {
    int gross_salary, allowance, deduction;
    int net_salary;
    printf("Enter gross salary: ");
    scanf("%d", &gross_salary);

    if (gross_salary > 10000) {
        allowance = 0.1*gross_salary;
        deduction = 0.03*gross_salary;
    }
    if (gross_salary > 5000) {
        allowance = 0.07*gross_salary;
        deduction = 0.02*gross_salary;
    }

    net_salary = gross_salary + allowance - deduction;
    printf("Net Salary: %d", net_salary);
}
