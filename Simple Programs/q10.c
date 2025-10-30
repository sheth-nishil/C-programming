#include <stdio.h>

int main()
{
    double dollars;
    double pounds;
    const int rs_per_dollar = 48;
    const int rs_per_pound = 70;
    double rupees;
    printf("Enter amount in dollars: ");
    scanf("%lf", &dollars);
    rupees = dollars * rs_per_dollar;
    pounds = rupees / rs_per_pound;
    printf("Amount in Pounds: %lf\n", pounds);
    return 0;
}
