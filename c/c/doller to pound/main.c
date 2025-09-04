#include <stdio.h>

int main() {
    double dollars, pounds;


    printf("Enter amount in Dollars: ");
    scanf("%lf", &dollars);

    pounds = dollars * 70/48;

    printf("%.2lf Dollars = %.2lf Pounds\n", dollars, pounds);

    return 0;
}
