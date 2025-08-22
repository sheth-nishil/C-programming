#include <stdio.h>

int main() {
    float bytes;
    float kb, mb, gb;
    
    printf("Enter number of bytes: ");
    scanf("%f", &bytes);
    
    kb = bytes / 1024;
    mb = kb / 1024;
    gb = mb / 1024;
    
    printf("\nConversion Results:\n");
    printf("%f bytes = %f KB\n", bytes, kb);
    printf("%f bytes = %f MB\n", bytes, mb);
    printf("%f bytes = %f GB\n", bytes, gb);
    
    return 0;
}