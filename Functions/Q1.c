#include <stdio.h>
#include <math.h>

float power(int a, int b) {
    int result = pow(a,b);
    return result;
}

int main() {
    printf("%.2f", power(2,3));
    return 0;
}
