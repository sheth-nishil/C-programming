#include <stdio.h>

int main()
{
    int n;
    int i;
    int is_prime;
    int count;
    count = 0;
    for (n = 2; n <= 500; n = n + 1)
    {
        is_prime = 1;
        for (i = 2; i <= n / 2; i = i + 1)
        {
            if (n % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1)
        {
            count = count + 1;
        }
    }
    printf("There are %d prime numbers between 1 and 500.\n", count);
    return 0;
}
