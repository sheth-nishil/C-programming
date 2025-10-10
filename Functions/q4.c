#include <stdio.h>

int swap (int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After Swapping: a = %d, b = %d\n", a,b);
    return 0;
}

int main() {
    int a = 5, b = 10;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap (a,b);
    printf("Original values: a = %d, b = %d", a,b);
}
