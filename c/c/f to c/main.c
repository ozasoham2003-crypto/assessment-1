#include <stdio.h>

int main() {
    double f, c;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &f);

    c = (f - 32) * 5.0 / 9.0;

    printf("%.2lf °F = %.2lf °C\n", f, c);

    return 0;
}
