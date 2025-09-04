#include <stdio.h>

int main() {
    double dollars, rupees;


    printf("Enter amount in Dollars: ");
    scanf("%lf", &dollars);

    rupees = dollars * 48;

    printf("%.2lf Dollars = %.2lf Rupees\n", dollars, rupees);

    return 0;
}
