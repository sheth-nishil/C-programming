#include <stdio.h>

int main() {
    float dollars;
    float rupees, pounds;
    const float USD_TO_INR = 48.0;
    const float P_TO_INR = 70.0;
    
    printf("Enter amount in dollars: $");
    scanf("%f", &dollars);
    
    rupees = dollars * USD_TO_INR;
    pounds = rupees / P_TO_INR;
    
    printf("$%f = ₹%f = £%f\n", dollars, rupees, pounds);
    printf("Direct conversion: $%f = £%f\n", dollars, pounds);
    
    return 0;
}