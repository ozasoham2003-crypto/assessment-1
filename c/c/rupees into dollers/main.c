#include <stdio.h>

int main() {
    double dollars, rupees;


    printf("Enter amount in Rupees: ");
    scanf("%lf", &rupees);

    dollars = rupees / 48;

    printf("%.2lf Rupees = %.2lf Dollars\n", rupees, dollars);

    return 0;
}
