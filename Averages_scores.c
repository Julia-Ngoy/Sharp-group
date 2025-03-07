#include<stdio.h>

#define SUBJECTS 3
#define ASSESSMENTS 4

int main () {


    char *subjects[] = {"Maths", "Physics", "Chemistry"};
    char *assessments[] = {"Assignment", "Coursework", "Midterm exam", "End of term exam"};
    int marks[SUBJECTS][ASSESSMENTS];
    double averages[SUBJECTS];
    double totalAverage = 0.0;


    for (int i = 0; i < SUBJECTS; i++) {
        printf("Please enter the marks obtained in %s:\n", subjects[i]);
        int sum = 0;
        for (int j = 0; j < ASSESSMENTS; j++) {
            printf("%s: ", assessments[j]);
            scanf("%d", &marks[i][j]);
            sum += marks[i][j];
        }
        averages[i] = (double)sum / ASSESSMENTS;
        printf("Your average in %s is %.2f\n", subjects[i], averages[i]);
        totalAverage += averages[i];
    }


    totalAverage = totalAverage/ SUBJECTS;
    printf("\nYour total average is %.2f\n", totalAverage);

    return 0;






}
