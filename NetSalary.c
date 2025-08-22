#include <stdio.h>

int main() {
    float gross_salary, allowance, deduction, net_salary;
    
    printf("Enter gross salary: ₹");
    scanf("%f", &gross_salary);
    
    allowance = gross_salary * 0.10;
    deduction = gross_salary * 0.03;
    
    net_salary = gross_salary + allowance - deduction;
    
    printf("\nSalary Details:\n");
    printf("Gross Salary: ₹%f\n", gross_salary);
    printf("Allowance: ₹%f\n", allowance);
    printf("Deduction: ₹%f\n", deduction);
    printf("Net Salary: ₹%f\n", net_salary);
    
    return 0;
}