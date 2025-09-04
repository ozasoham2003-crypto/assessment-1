#include <stdio.h>


int main() {
    double r, a;

    printf("Enter radius of circle: ");
    scanf("%lf", &r);

    a = 22.0/7.0 * r * r;

    printf("Area of circle = %.2lf\n", a);

    return 0;
}
