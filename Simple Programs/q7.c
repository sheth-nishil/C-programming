#include <stdio.h>

int main()
{
    double minutes;
    double hours;
    printf("Enter minutes: ");
    scanf("%lf", &minutes);
    hours = minutes / 60.0;
    printf("Hours: %lf\n", hours);
    return 0;
}
