#include <stdio.h>

int main() {
    double c, f;

    printf("Enter temperature in Celsius: ");
    scanf("%lf", &c);

    f = (c * 9.0 / 5.0) + 32;

    printf("%.2lf °C = %.2lf °F\n", c, f);

    return 0;
}
