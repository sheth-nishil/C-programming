#include <stdio.h>

int main () {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i=1; i<n+1; i++) {
        sum += i;
    }
    printf("Sum: %d", sum);
    return 0;
}
