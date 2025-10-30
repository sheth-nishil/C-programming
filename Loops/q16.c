#include <stdio.h>

int main()
{
    int i;
    int current_number;
    int largest;
    int smallest;
    printf("Enter 100 numbers:\n");
    for (i = 1; i <= 100; i = i + 1)
    {
        printf("Number %d: ", i);
        scanf("%d", &current_number);
        if (i == 1)
        {
            largest = current_number;
            smallest = current_number;
        }
        else
        {
            if (current_number > largest)
            {
                largest = current_number;
            }
            if (current_number < smallest)
            {
                smallest = current_number;
            }
        }
    }
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    return 0;
}
