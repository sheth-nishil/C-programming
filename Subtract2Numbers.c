#include <stdio.h>

int main () {
    int n1, n2, diff;
    printf("First Number: ");
    scanf("%d", &n1);
    printf("Second number: ");
    scanf("%d", &n2);
    diff = n1 - n2;
    printf("This is my difference: %d", diff);
    return 0;
}