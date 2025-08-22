#include <stdio.h>

int main () {
    int n1, n2, mul;
    printf("First Number: ");
    scanf("%d", &n1);
    printf("Second number: ");
    scanf("%d", &n2);
    mul = n1 * n2;
    printf("This is my multiplication: %d", mul);
    return 0;
}