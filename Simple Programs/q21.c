#include <stdio.h>

int main()
{
    double gross_salary;
    double allowance;
    double deduction;
    double net_salary;
    printf("Enter Gross Salary: ");
    scanf("%lf", &gross_salary);
    allowance = gross_salary * 0.10;
    deduction = gross_salary * 0.03;
    net_salary = gross_salary + allowance - deduction;
    printf("Allowance (10%%): %lf\n", allowance);
    printf("Deduction (3%%): %lf\n", deduction);
    printf("Net Salary: %lf\n", net_salary);
    return 0;
}
