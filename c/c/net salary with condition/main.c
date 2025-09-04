#include <stdio.h>

int main() {
    float g, a, d, ns;

    printf("Enter Gross Salary: ");
    scanf("%f", &g);

    if (g > 10000) {
        a = g * 0.10;   // 10% allowance
        d = g * 0.03;   // 3% deduction
    }
    else if (g > 5000) {
        a = g * 0.07;   // 7% allowance
        d = g * 0.02;   // 2% deduction
    }
    else {
        a = g * 0.05;   // for less salary give some default
        d = g * 0.01;
    }

    ns = g + a - d;

    printf("Net Salary = %.2f\n", ns);

    return 0;
}
