#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    int sum;
    float percentage;

    
    printf("Enter marks for 5 subjects (0 - 100):\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    
    sum = m1 + m2 + m3 + m4 + m5;
    percentage = sum / 5.0;

    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 85) {
        printf("Result: Full Scholarship\n");
    }
    else if (percentage >= 70) {
        printf("Result: Partial Scholarship\n");
    }
    else if (percentage >= 50) {
        printf("Result: Eligible for Consideration\n");
    }
    else {
        printf("Result: Not Eligible\n");
    }

    return 0;
}
