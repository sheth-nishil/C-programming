#include <stdio.h>

int main()
{
    int i;
    int sum;
    sum = 0;
    for (i = 1; i <= 100; i = i + 1)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
        }
    }
    printf("Sum of numbers divisible by 3 between 1 and 100 is: %d\n", sum);
    return 0;
}
