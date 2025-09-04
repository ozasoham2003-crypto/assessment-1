#include <stdio.h>

int main() {
    double bytes, kb, mb, gb;

    printf("Enter size in bytes: ");
    scanf("%lf", &bytes);

    kb = bytes / 1024.0;                // 1 KB = 1024 bytes
    mb = bytes / (1024.0 * 1024.0);     // 1 MB = 1024 KB
    gb = bytes / (1024.0 * 1024.0 * 1024.0); // 1 GB = 1024 MB

    printf("\n%.2lf Bytes = %.2lf KB\n", bytes, kb);
    printf("%.2lf Bytes = %.2lf MB\n", bytes, mb);
    printf("%.2lf Bytes = %.2lf GB\n", bytes, gb);

    return 0;
}
