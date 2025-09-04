#include <stdio.h>

int main() {
    double b, h, a;

    printf("Enter base of triangle: ");
    scanf("%lf", &b);

    printf("Enter height of triangle: ");
    scanf("%lf", &h);

    a = 0.5 * b * h;

    printf("Area of triangle = %.2lf\n", a);

    return 0;
}
