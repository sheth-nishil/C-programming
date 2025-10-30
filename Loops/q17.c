#include <stdio.h>

int main()
{
    int i;
    int number;
    int positive_count;
    int negative_count;
    int zero_count;
    positive_count = 0;
    negative_count = 0;
    zero_count = 0;
    printf("Enter 200 values:\n");
    for (i = 1; i <= 200; i++)
    {
        printf("Value %d: ", i);
        scanf("%d", &number);
        if (number > 0)
        {
            positive_count += 1;
        }
        else if (number < 0)
        {
            negative_count += 1;
        }
        else
        {
            zero_count += 1;
        }
    }
    printf("Positive Count: %d\n", positive_count);
    printf("Negative Count: %d\n", negative_count);
    printf("Zero Count: %d\n", zero_count);
    return 0;
}
