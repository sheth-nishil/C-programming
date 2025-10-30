#include <stdio.h>

int main()
{
    int i;
    int odd_number;
    for (i = 1; i <= 10; i = i + 1)
    {
        odd_number = 2 * i - 1;
        printf("%d\n", odd_number);
    }
    return 0;
}
