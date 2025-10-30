#include <stdio.h>

int main()
{
    double rupees;
    double dollars;
    const int rate = 48;
    printf("Enter amount in Rupees: ");
    scanf("%lf", &rupees);
    dollars = rupees / rate;
    printf("Amount in Dollars: %lf\n", dollars);
    return 0;
}
