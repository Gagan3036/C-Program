/* Write a program to store and display the name, roll no, and fess of 100
students using structure.*/

#include <stdio.h>

#define MAX_STUDENTS 100

struct Student {
    char name[50];
    int roll_no;
    float fees;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int num_students;

    // Input data for each student
    printf("Enter the number of students (up to 100): ");
    scanf("%d", &num_students);

    if (num_students > MAX_STUDENTS) {
        printf("Maximum number of students exceeded.\n");
        return 1;
    }

    for (int i = 0; i < num_students; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Fees: ");
        scanf("%f", &students[i].fees);
    }

    // Display data for each student
    printf("\n\nStudent Data:\n");
    for (int i = 0; i < num_students; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Fees: %.2f\n", students[i].fees);
    }

    return 0;
}
