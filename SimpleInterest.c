#include <stdio.h>

int main() {
    float principal, rate, time, interest;
    
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter rate of interest (%% per year): ");
    scanf("%f", &rate);
    
    printf("Enter time (in years): ");
    scanf("%f", &time);
    
    interest = (principal * rate * time) / 100;
    printf("Simple Interest = ₹%f\n", interest);
    printf("Total Amount = ₹%f\n", principal + interest);
    
    return 0;
}