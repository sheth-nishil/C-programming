#include <stdio.h>

int main()
{
    int i;
    float value;
    float sum;
    float mean;
    sum = 0.0;
    printf("Enter 10 values:\n");
    for (i = 1; i <= 10; i = i + 1)
    {
        printf("Value %d: ", i);
        scanf("%f", &value);
        sum = sum + value;
    }
    mean = sum / 10.0;
    printf("Total Sum: %f\n", sum);
    printf("Mean (Average): %f\n", mean);
    return 0;
}
