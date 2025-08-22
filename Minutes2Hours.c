#include <stdio.h>

int main() {
    float hours, minutes;
    
    printf("Enter minutes: ");
    scanf("%f", &minutes);
    
    hours = minutes / 60;
    printf("%f minutes = %f hours\n", minutes, hours);
    
    return 0;
}