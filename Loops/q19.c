#include <stdio.h>

int main()
{
    int i;
    printf("Numbers divisible by 5 between 1 and 100:\n");
    for (i = 1; i <= 100; i = i + 1)
    {
        if (i % 5 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
