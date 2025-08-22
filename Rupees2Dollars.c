#include <stdio.h>

int main() {
    float rupees;
    float dollars;
    const float EXCHANGE_RATE = 48;
    
    printf("Enter amount in rupees: ₹");
    scanf("%f", &rupees);
    
    dollars = rupees / EXCHANGE_RATE;
    printf("₹%f = $%f\n", rupees, dollars);
    
    return 0;
}