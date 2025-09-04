#include <stdio.h>

int main() {
    int minutes;
    double hours;

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;

    printf("%d minutes = %.2f hours\n", minutes, hours);

    return 0;
}
