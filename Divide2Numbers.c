#include <stdio.h>

int main () {
    float n1, n2, div;
    printf("First Number: ");
    scanf("%f", &n1);
    printf("Second number: ");
    scanf("%f", &n2);
    div = n1 / n2;
    printf("This is my division: %f", div);
    return 0;
}