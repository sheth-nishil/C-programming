#include <stdio.h>

int main() {
    float sub1, sub2, sub3, total, average;
    
    printf("Enter marks for Subject 1: ");
    scanf("%f", &sub1);
    
    printf("Enter marks for Subject 2: ");
    scanf("%f", &sub2);
    
    printf("Enter marks for Subject 3: ");
    scanf("%f", &sub3);
    
    total = sub1 + sub2 + sub3;
    average = total / 3;
    
    printf("\nResults:\n");
    printf("Subject 1: %f\n", sub1);
    printf("Subject 2: %f\n", sub2);
    printf("Subject 3: %f\n", sub3);
    printf("Total Marks: %f\n", total);
    printf("Average Marks: %f\n", average);
    
    return 0;
}