#include <stdio.h>

int main()
{
    int n;
    float value;
    float sum;
    float mean;
    sum = 0.0;
    printf("Enter the number of values (n): ");
    scanf("%d", &n);
    printf("Enter %d values:\n", n);
    for (int i = 1; i <= n; i = i + 1)
    {
        printf("Value %d: ", i);
        scanf("%f", &value);
        sum = sum + value;
    }

    mean = sum / (float)n;
    printf("Total Sum: %f\n", sum);
    printf("Mean (Average): %f\n", mean);
    return 0;
}
