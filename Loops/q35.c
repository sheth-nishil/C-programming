#include <stdio.h>

int main() {
    // pattern A
    for (int i = 1; i <= 2; i = i + 1) {
        for (int j = 1; j <= 3; j = j + 1) {
            printf("%d %d\n", i, j);
        }
    }

    printf("\n");

    // pattern B
    for (int i = 1; i <= 3; i = i + 1) {
        for (int j = 1; j <= i; j = j + 1) {
            printf("%d %d\n", i, j);
        }
    }

    printf("\n");
    // pattern C
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 2; j++) {
            for (int k = 1; k <= 2; k++) {
                printf("%d %d %d\n", i, j, k);
            }
        }
    }

    // pattern D
    printf("\n");
    for (int i = 5; i >= 3; i--) {
        for (int j = 1; j <= 2; j++) {
            printf("%d %d\n", i, j);
        }
    }

    return 0;
}