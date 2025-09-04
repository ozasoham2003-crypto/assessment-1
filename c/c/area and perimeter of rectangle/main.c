#include <stdio.h>

int main() {
    double l, w, a, p;

    printf("Enter length of rectangle: ");
    scanf("%lf", &l);

    printf("Enter width of rectangle: ");
    scanf("%lf", &w);

    a = l * w;
    p = 2 * (l + w);

    printf("Area = %.2lf\n", a);
    printf("Perimeter = %.2lf\n", p);

    return 0;
}
