#include <stdio.h>

// Function to calculate total marks
int calculateTotal(int marks[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += marks[i];
    }
    return total;
}

// Function to calculate average marks
float calculateAverage(int total, int size) {
    return (float)total / size;
}

// Function to determine grade based on average
char* calculateGrade(float average) {
    if (average >= 90) {
        return "A";
    } else if (average >= 80) {
        return "B";
    } else if (average >= 70) {
        return "C";
    } else if (average >= 60) {
        return "D";
    } else {
        return "Fail";
    }
}

int main() {
    int marks[5];
    int total;
    float average;
    char* grade;

    printf("Enter marks for 5 subjects (out of 100):\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    total = calculateTotal(marks, 5);
    average = calculateAverage(total, 5);
    grade = calculateGrade(average);

    printf("\n----- Result -----\n");
    printf("Total Marks: %d / 500\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %s\n", grade);

    return 0;
}