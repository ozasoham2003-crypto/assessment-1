#include <stdio.h>

int main() {
    int a, b, t;  // a = first num, b = second num, t = temp

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    t = a;
    a = b;
    b = t;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
