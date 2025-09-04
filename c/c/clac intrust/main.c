#include <stdio.h>

int main() {
    double p, r, t, i;

    printf("Enter principal amount: ");
    scanf("%lf", &p);

    printf("Enter rate of interest (%%): ");
    scanf("%lf", &r);

    printf("Enter time (in years): ");
    scanf("%lf", &t);

    i = (p * r * t) / 100.0;

    printf("Simple Interest = %.2lf\n", i);

    return 0;
}
