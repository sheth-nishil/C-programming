#include <stdio.h>

int main()
{
    int i;
    char sex_code;
    int boy_count;
    int girl_count;
    boy_count = 0;
    girl_count = 0;
    printf("Enter sex code for 50 students (M for Male, F for Female):\n");
    for (i = 1; i <= 50; i = i + 1)
    {
        printf("Student %d: ", i);
        scanf(" %c", &sex_code);
        if (sex_code == 'M' || sex_code == 'm')
        {
            boy_count = boy_count + 1;
        }
        else if (sex_code == 'F' || sex_code == 'f')
        {
            girl_count = girl_count + 1;
        }
        else
        {
            printf("Invalid code entered. Skipping.\n");
        }
    }
    printf("Number of Boys: %d\n", boy_count);
    printf("Number of Girls: %d\n", girl_count);
    return 0;
}
