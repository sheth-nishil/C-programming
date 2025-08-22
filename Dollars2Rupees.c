#include <stdio.h>

int main() {
    float dollars;
    float rupees;
    const float EXCHANGE_RATE = 48;
    
    printf("Enter amount in dollars: $");
    scanf("%f", &dollars);
    
    rupees = dollars * EXCHANGE_RATE;
    printf("$%f = ₹%f\n", dollars, rupees);
    
    return 0;
}