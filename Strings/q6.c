#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Hello";
    char s2[] = "World";

    int c = strcmp(s1, s2);

    if (c>0) printf("%s greater than %s", s1, s2);
    if (c<0) printf("%s smaller than %s", s1, s2);
    else printf("%s is equal to %s", s1, s2);
    return 0;
}
