#include <stdio.h>

int main() {
    double num1, num2, result;

    printf("Enter dividend: ");
    scanf("%lf", &num1);

    printf("Enter divisor: ");
    scanf("%lf", &num2);

    if (num2 != 0) {
        result = num1 / num2;
        printf("Quotient = %.2lf\n", result);
    } else {
        printf("Error! Division by zero is not allowed.\n");
    }

    return 0;
}
