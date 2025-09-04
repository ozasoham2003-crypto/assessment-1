#include <stdio.h>

int main() {
    int a, b, c;
    int lg, sm;

    printf("Enter three values: ");
    scanf("%d %d %d", &a, &b, &c);

    // Largest
    if (a > b && a > c) {
        lg = a;
    } else if (b > a && b > c) {
        lg = b;
    } else {
        lg = c;
    }

    // Smallest
    if (a < b && a < c) {
        sm = a;
    } else if (b < a && b < c) {
        sm = b;
    } else {
        sm = c;
    }

    printf("Largest = %d\n", lg);
    printf("Smallest = %d\n", sm);

    return 0;
}
