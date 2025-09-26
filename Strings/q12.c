#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";
    strlwr(str);
    // vowels= a,e,i,o,u
    int f[] = {0,0,0,0,0};

    for (int i = 0; i < strlen(str); i++) {
            char ch = str[i];
        switch (ch) {
            case 'a':
                f[0]++;
                break;
            case 'e':
                f[1]++;
                break;
            case 'i':
                f[2]++;
                break;
            case 'o':
                f[3]++;
                break;
            case 'u':
                f[4]++;
                break;
        }
    }
    printf("a: %d, e: %d, i: %d, o: %d, u: %d", f[0],f[1], f[2], f[3], f[4]);
    return 0;
}
