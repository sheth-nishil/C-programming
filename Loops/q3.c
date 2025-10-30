#include <stdio.h>

int main()
{
    int i;
    int even_number;
    for (i = 1; i <= 10; i = i + 1)
    {
        even_number = 2 * i;
        printf("%d\n", even_number);
    }
    return 0;
}
