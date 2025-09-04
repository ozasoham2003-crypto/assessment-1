#include <stdio.h>

int main() {
    double g, d, n;
    // g = gross sales, d = discount, n = net sales

    printf("Enter gross sales: ");
    scanf("%lf", &g);

    d = 0.10 * g;
    n = g - d;

    printf("Gross Sales = %.2lf\n", g);
    printf("Discount (10%%) = %.2lf\n", d);
    printf("Net Sales = %.2lf\n", n);

    return 0;
}
