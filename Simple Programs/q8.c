#include <stdio.h>

int main()
{
    double dollars;
    double rupees;
    const int rate = 48;
    printf("Enter amount in dollars: ");
    scanf("%lf", &dollars);
    rupees = dollars * rate;
    printf("Amount in Rupees: %lf\n", rupees);
    return 0;
}
