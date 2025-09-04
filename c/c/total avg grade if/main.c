#include <stdio.h>

int main() {
    int s1, s2, s3, total;
    float avg;

    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    // Check for direct fail condition
    if (s1 < 35 || s2 < 35 || s3 < 35) {
        printf("Result: Fail (one or more subject marks below 35)\n");
    }
    else {
        total = s1 + s2 + s3;
        avg = total / 3.0;

        printf("Total = %d\n", total);
        printf("Average = %.2f\n", avg);

        if (avg >= 70)
            printf("Grade: A\n");
        else if (avg >= 60)
            printf("Grade: B\n");
        else if (avg >= 50)
            printf("Grade: C\n");
        else if (avg >= 35)
            printf("Grade: D\n");
        else
            printf("Grade: Fail\n");
    }

    return 0;
}
