#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "";
    strcpy(str2, str1);
    printf("%s", str2);
    return 0;
}
