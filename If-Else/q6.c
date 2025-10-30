#include <stdio.h>

int main()
{
    int mark1;
    int mark2;
    int mark3;
    int total;
    float average;
    printf("Enter marks for Subject 1 (0-100): ");
    scanf("%d", &mark1);
    printf("Enter marks for Subject 2 (0-100): ");
    scanf("%d", &mark2);
    printf("Enter marks for Subject 3 (0-100): ");
    scanf("%d", &mark3);
    total = mark1 + mark2 + mark3;
    average = (float)total / 3.0;
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %f\n", average);
    if (mark1 < 35 || mark2 < 35 || mark3 < 35)
    {
        printf("Result: Fail (Failed in one or more subjects)\n");
    }
    else
    {
        if (average >= 70.0)
        {
            printf("Result: Distinction\n");
        }
        else if (average >= 60.0)
        {
            printf("Result: First Class\n");
        }
        else if (average >= 50.0)
        {
            printf("Result: Second Class\n");
        }
        else if (average >= 35.0)
        {
            printf("Result: Third Class\n");
        }
        else
        {
            printf("Result: Fail\n");
        }
    }
    return 0;
}
