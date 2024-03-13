#include <stdio.h>
double getaverage(double scores[5])
{
    double sum = 0;
    for (int i = 0; i < 5; i++) {
        sum = sum + scores[i];
    }
    double average = sum / 5;

    return average;
}

char computeGrade(double studentaverage)
{
    char grade;
    if (studentaverage >= 80) {
        grade = 'A';
    }
    else if (studentaverage >= 60) {
        grade = 'B';
    }
    else if (studentaverage >= 50) {
        grade = 'C';
    }
    else {
        grade = 'F';
    }
    return grade;
}

int main()

{
    double Grades[5];

    for (int i = 0; i < 6; i++) {
        printf("Enter grades: ");
        scanf("%lf", &Grades[i]);

    }


    double average = getaverage(Grades);

    char Grade = computeGrade(average);

    printf("%c\n", Grade);
    printf("%.2lf", average);

    return 0;
}
