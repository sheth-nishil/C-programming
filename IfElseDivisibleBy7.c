#include <stdio.h>

int main () {
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    if (n%7 == 0) {
        printf("Number is divisible by 7.");
    }
    else {
        printf("Not divisible by 7");
    }
    return 0;
}
