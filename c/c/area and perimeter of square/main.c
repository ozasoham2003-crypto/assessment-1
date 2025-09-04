#include <stdio.h>

int main() {
    double s, a, p;
    printf("Enter side of square: ");
    scanf("%lf", &s);

    a = s * s;
    p = 4 * s;

    printf("Area = %.2lf\n", a);
    printf("Perimeter = %.2lf\n", p);

    return 0;
}
