#include <stdio.h>

int main() {
    double g, a, d, n;
    // g = gross, a = allowance, d = deduction, n = net

    printf("Enter gross salary: ");
    scanf("%lf", &g);

    a = 0.10 * g;  // 10% allowance
    d = 0.03 * g;  // 3% deduction
    n = g + a - d;

    printf("Gross Salary = %.2lf\n", g);
    printf("Allowance (10%%) = %.2lf\n", a);
    printf("Deduction (3%%) = %.2lf\n", d);
    printf("Net Salary = %.2lf\n", n);

    return 0;
}
