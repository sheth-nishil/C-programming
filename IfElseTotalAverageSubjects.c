#include <stdio.h>

int main () {
    int sub1, sub2, sub3;
    int total;
    float average;
    printf("Enter marks: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);
    total = sub1 + sub2 + sub3;
    average = total/3.0;

    if (sub1 < 35 || sub2 < 35 || sub3 < 35) {
        printf("Fail!");
    }
    else {
        if (average >= 70) {
        printf("Distinction");
        }
        else if (average >= 60) {
        printf("First");
        }
        else if (average >= 50) {
        printf("Second");
        }
        else if (average >= 35) {
        printf("third");
        }
        else {
        printf("Fail!");
        }
    }

    return 0;
}
