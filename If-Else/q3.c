#include <stdio.h>

int main()
{
    float gross_salary;
    float allowance_rate;
    float deduction_rate;
    float allowance;
    float deduction;
    float net_salary;
    printf("Enter Gross Salary: ");
    scanf("%f", &gross_salary);
    if (gross_salary > 10000.0)
    {
        allowance_rate = 0.10;
        deduction_rate = 0.03;
    }
    else if (gross_salary > 5000.0)
    {
        allowance_rate = 0.07;
        deduction_rate = 0.02;
    }
    else
    {
        allowance_rate = 0.0;
        deduction_rate = 0.0;
    }
    allowance = gross_salary * allowance_rate;
    deduction = gross_salary * deduction_rate;
    net_salary = gross_salary + allowance - deduction;
    printf("Gross Salary: %f\n", gross_salary);
    printf("Total Allowance: %f\n", allowance);
    printf("Total Deduction: %f\n", deduction);
    printf("Net Salary: %f\n", net_salary);
    return 0;
}
