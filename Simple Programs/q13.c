#include <stdio.h>

int main()
{
    double bytes;
    double kb;
    double mb;
    double gb;
    const double factor = 1024.0;
    printf("Enter size in bytes: ");
    scanf("%lf", &bytes);
    kb = bytes / factor;
    mb = kb / factor;
    gb = mb / factor;
    printf("Kilobytes (KB): %lf\n", kb);
    printf("Megabytes (MB): %lf\n", mb);
    printf("Gigabytes (GB): %lf\n", gb);
    return 0;
}
