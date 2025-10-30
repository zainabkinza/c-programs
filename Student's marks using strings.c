#include <stdio.h>
int main() {
    int students, subjects;
    float marks[5][4];       // 2D array for marks
    float avg[5];            // to store each student's average
    int i, j, topStudent = 0;
    float total, maxAvg = 0;

    // Input number of students and subjects
    printf("Enter number of students (max 5): ");
    scanf("%d", &students);
    printf("Enter number of subjects (max 4): ");
    scanf("%d", &subjects);

    // Input marks
    for (i = 0; i < students; i++) {
        printf("Enter marks for Student %d: \n", i + 1);
        for (j = 0; j < subjects; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &marks[i][j]);
        }
    }

    // Calculating each student's average
    for (i = 0; i < students; i++) {
        total = 0;
        for (j = 0; j < subjects; j++) {
            total += marks[i][j];
        }
        avg[i] = total / subjects;

        // Highest average
        if (avg[i] > maxAvg) {
            maxAvg = avg[i];
            topStudent = i;
        }
    }

    // Displaying all students' averages
    printf("\n===== STUDENT AVERAGES =====\n");
    for (i = 0; i < students; i++) {
        printf("Student %d Average: %.2f\n", i + 1, avg[i]);
    }

    // Highest scorer
    printf("\n===== TOP SCORER =====\n");
    printf("Highest Overall Scorer: Student %d\n", topStudent + 1);
    printf("Average Marks: %.2f\n", maxAvg);

    return 0;
}
