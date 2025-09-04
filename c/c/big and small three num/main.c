#include <stdio.h>

int main() {
    int a, b, c;
    int lg, sm;

    printf("Enter three values: ");
    scanf("%d %d %d", &a, &b, &c);

    // assume a is both largest and smallest
    lg = a;
    sm = a;

    if (b > lg) lg = b; //b>a
    if (c > lg) lg = c; //c>a

    if (b < sm) sm = b; //b<a
    if (c < sm) sm = c; //c<a

    printf("Largest = %d\n", lg);
    printf("Smallest = %d\n", sm);

    return 0;
}
