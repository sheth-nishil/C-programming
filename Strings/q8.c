#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";
    int ifPalindrome = 1;
    for (int i = 0; i < strlen(str);i++){
        if (str[i] == str[strlen(str) -i-1]) {
            continue;
        }
        else {
            ifPalindrome = 0;
            break;
        }
    }
    printf("%s", (ifPalindrome) ? "is Palindrome" : "not a palindrome");
    return 0;
}
