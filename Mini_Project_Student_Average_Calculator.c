#include <stdio.h>

#define MAX_SUBJECTS 20

void inputMarks(float marks[], int n) {
    for (int i = 0; i < n; i++) {
        do {
            printf("Enter marks for subject %d (0-100): ", i + 1);
            scanf("%f", &marks[i]);

            if (marks[i] < 0 || marks[i] > 100) {
                printf("Invalid marks. Please enter a value between 0 and 100.\n");
            }
        } while (marks[i] < 0 || marks[i] > 100);
    }
}

float calculateTotal(float marks[], int n) {
    float total = 0;

    for (int i = 0; i < n; i++) {
        total += marks[i];
    }

    return total;
}

float calculateAverage(float total, int n) {
    return total / n;
}

void displayResult(float total, float average, int n) {
    printf("\n----- Student Result -----\n");
    printf("Number of subjects : %d\n", n);
    printf("Total marks        : %.2f\n", total);
    printf("Average marks      : %.2f\n", average);
}

int main() {
    int n;
    float marks[MAX_SUBJECTS];
    float total, average;

    printf("===== Student Average Calculator =====\n");

    do {
        printf("Enter number of subjects (1-%d): ", MAX_SUBJECTS);
        scanf("%d", &n);

        if (n < 1 || n > MAX_SUBJECTS) {
            printf("Invalid number of subjects.\n");
        }
    } while (n < 1 || n > MAX_SUBJECTS);

    inputMarks(marks, n);

    total = calculateTotal(marks, n);
    average = calculateAverage(total, n);

    displayResult(total, average, n);

    return 0;
}
