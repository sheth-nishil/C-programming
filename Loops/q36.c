#include <stdio.h>

int main()  {

    // pattern A
    for (int i = 1; i <= 5; i = i + 1) {
        printf("%d %d\n", i, 6-i);
    }

    printf("\n");

    // pattern B
    for (int k = 1; k<=6; k++) {
        int a = (k-1)/2 + 1;
        int b = 6 - a;
        printf("%d %d\n", a, b);
    }
    return 0;
}