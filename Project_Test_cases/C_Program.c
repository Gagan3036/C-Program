#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define date  365
struct Student {
    int id;
    char name[50];
    int age;
    float gpa;
};
struct Date {
    int DD;
    int MM;
    int YYYY;
};
struct Attendance {
    char pora;
};

struct Date* dates[date];
struct Attendance* attendance[MAX_STUDENTS];
struct Student* students[MAX_STUDENTS];

int num_students = 0;
int num_dates = 0;

void add_date() {
    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &dates[num_dates]->DD, &dates[num_dates]->MM, &dates[num_dates]->YYYY);
    num_dates++;
    return;
}
void addStudent() {
    if (num_students >= MAX_STUDENTS) {
        printf("Maximum number of students reached!\n");
        return;
    }

    struct Student* new_student = (struct Student*)malloc(sizeof(struct Student));
    if (new_student == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enter student ID: ");
    scanf("%d", &new_student->id);
    printf("Enter student name: ");
    scanf("%s", new_student->name);
    printf("Enter student age: ");
    scanf("%d", &new_student->age);
    printf("Enter student GPA: ");
    scanf("%f", &new_student->gpa);

    students[num_students++] = new_student;
    printf("Student added successfully!\n");
}
void displayStudents() {
    if (num_students == 0) {
        printf("No students found!\n");
        return;
    }

    printf("Student Records:\n");
    for (int i = 0; i < num_students; i++) {
        printf("ID: %d, Name: %s, Age: %d, GPA: %.2f\n",
               students[i]->id, students[i]->name, students[i]->age, students[i]->gpa);
    }
}
void freeMemory() {
    for (int i = 0; i < num_students; i++) {
        free(students[i]);
    }
}
void takeAttendance() {
    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &dates[num_dates]->DD, &dates[num_dates]->MM, &dates[num_dates]->YYYY);
    num_dates++;    
    for(int i=0; i<num_students; i++){
        printf("ID: %d, Name: %s, Age: %d, GPA: %.2f\tP/A: ", students[i]->id, students[i]->name, students[i]->age, students[i]->gpa);
        scanf(" %c ", &attendance[i]->pora);
        if(i==num_students){
            printf("Attendance taken successfully!\n");
        }
    }
    return;
}
void viewAttendance() {
    if (num_dates == 0) {
        printf("No dates found!\n");
        return;
    }
    int DD, MM, YYYY;
    printf("\nEnter date (DD MM YYYY): ");
    scanf("%d %d %d", &DD, &MM, &YYYY);
    for (int i = 0; i < num_dates; i++) {
        if (dates[i]->DD == DD && dates[i]->MM == MM && dates[i]->YYYY == YYYY) {
            for(int j=0; j<num_students; j++){
                printf("ID: %d, Name: %s, P/A: %c\n", students[j]->id, students[j]->name, attendance[j]->pora);
            }
            return;
        }
        else{
            printf("No attendance found for the given date!\n");
        }
    }
    return;
}

int main() {
    int choice;

    while (1) {
        printf("\nStudent Record System\n");
        printf("1. Take Attendance\n");
        printf("2. View Attendance\n");
        printf("3. Add Student\n");
        printf("4. Display Students\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                takeAttendance();
                break;
            case 2:
                viewAttendance();
                break;
            case 3:
                addStudent();
                break;
            case 4:
                displayStudents();
                break;
            case 5:
                //freeMemory();
                exit(0);
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}
