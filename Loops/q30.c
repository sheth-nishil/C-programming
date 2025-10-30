#include <stdio.h>

int main()
{
    int n;
    int i;
    int is_prime;
    printf("Prime numbers between 1 and 500 are:\n");
    for (n = 2; n <= 500; n = n + 1)
    {
        is_prime = 1;
        for (i = 2; i <= n; i = i + 1)
        {
            if (n % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1)
        {
            printf("%d\n", n);
        }
    }
    return 0;
}
