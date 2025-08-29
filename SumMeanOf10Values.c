#include <stdio.h>

int main () {
    float sum = 0;

    for (int i=1; i<11; i++) {
        sum += i;
    }
    printf("Sum: %.0f\n", sum);
    printf("Mean: %.2f", sum/10.00);
    return 0;
}
