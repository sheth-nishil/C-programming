#include <stdio.h>

int main()
{
    double sub1;
    double sub2;
    double sub3;
    double total;
    double average;
    printf("Enter marks for subject 1: ");
    scanf("%lf", &sub1);
    printf("Enter marks for subject 2: ");
    scanf("%lf", &sub2);
    printf("Enter marks for subject 3: ");
    scanf("%lf", &sub3);
    total = sub1 + sub2 + sub3;
    average = total / 3.0;
    printf("Total Marks: %lf\n", total);
    printf("Average Marks: %lf\n", average);
    return 0;
}
