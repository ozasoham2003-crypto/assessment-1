#include <stdio.h>

int main() {
    double s1, s2, s3, t, avg;
    // s1,s2,s3 = subjects, t = total, avg = average

    printf("Enter marks of maths: ");
    scanf("%lf", &s1);

    printf("Enter marks of chemistry: ");
    scanf("%lf", &s2);

    printf("Enter marks of physics: ");
    scanf("%lf", &s3);

    t = s1 + s2 + s3;
    avg = t / 3.0;

    printf("Total = %.2lf\n", t);
    printf("Average = %.2lf\n", avg);

    return 0;
}
