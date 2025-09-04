#include <stdio.h>

int main() {
    double a, b, c;
    int choice;

    printf("Calculator Program\n");
    printf("-------------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter first number (a): ");
    scanf("%lf", &a);
    printf("Enter second number (b): ");
    scanf("%lf", &b);

    if (choice == 1) {
        c = a + b;
        printf("Sum = %.2lf\n", c);
    }
    else if (choice == 2) {
        c = a - b;
        printf("Difference = %.2lf\n", c);
    }
    else if (choice == 3) {
        c = a * b;
        printf("Product = %.2lf\n", c);
    }
    else if (choice == 4) {
        if (b != 0) {
            c = a / b;
            printf("Quotient = %.2lf\n", c);
        } else {
            printf("Error! Division by zero is not allowed.\n");
        }
    }
    else {
        printf("Invalid choice! Please select between 1 and 4.\n");
    }

    return 0;
}