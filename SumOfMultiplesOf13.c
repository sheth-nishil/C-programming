#include <stdio.h>

int main () {
    int sum = 0;

    for (int i=1; i<101; i++) {
        if ((i%13) == 0) {
            sum += i;
        }
    }
    printf("Sum of multiples of 13 from 1 to 100: %d", sum);
    return 0;
}
