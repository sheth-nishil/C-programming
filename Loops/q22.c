#include <stdio.h>

int main()
{
    int number;
    int count;
    int temp_number;
    count = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    temp_number = number;
    if (temp_number == 0)
    {
        count = 1;
    }
    else
    {
        while (temp_number != 0)
        {
            temp_number = temp_number / 10;
            count = count + 1;
        }
    }
    printf("The number %d has %d digits\n", number, count);
    return 0;
}
