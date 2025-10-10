#include <stdio.h>

int isLeapYear(int year) {

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            return year % 400 == 0;
        }
        else {
            return 1;
        }
    }

    else {
        return 1;
    }

}

int main() {
    int year = 1900;
    if (isLeapYear(year)) {
        printf("%d is a leap year", year);
    }
    else {
        printf("%d is not a leap year", year);
    }
}
