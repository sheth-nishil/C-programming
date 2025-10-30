#include <stdio.h>

int main()
{
    int hours;
    int minutes;
    printf("Enter hours: ");
    scanf("%d", &hours);
    minutes = hours * 60;
    printf("Minutes: %d\n", minutes);
    return 0;
}
