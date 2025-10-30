#include <stdio.h>

int main()
{
    double principal;
    double rate;
    double time;
    double interest;
    printf("Enter Principal Amount (P): ");
    scanf("%lf", &principal);
    printf("Enter Rate of Interest (R): ");
    scanf("%lf", &rate);
    printf("Enter Time in Years (N): ");
    scanf("%lf", &time);
    interest = (principal * rate * time) / 100.0;
    printf("Simple Interest (I): %lf\n", interest);
    return 0;
}
