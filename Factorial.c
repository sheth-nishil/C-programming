#include <stdio.h>

int main () {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    int factorial = 1;

    for (int i=1; i<n+1; i++) {
        factorial*=i;
    }
    printf("n! = %d", factorial);
    return 0;
}
