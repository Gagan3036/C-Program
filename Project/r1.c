#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define DATE 365

struct Student {
    char id[10]; // Changed to character array to accommodate letters with numbers
    char name[50];
};

struct Date {
    int DD;
    int MM;
    int YYYY;
};

struct Attendance {
    char pora[MAX_STUDENTS]; // Changed to array to store attendance for each student
};

struct Date dates[DATE];
struct Attendance attendance[DATE]; // Changed to store attendance for each date
struct Student students[MAX_STUDENTS];

int num_students = 0;
int num_dates = 0;

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void add_date() {
    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &dates[num_dates].DD, &dates[num_dates].MM, &dates[num_dates].YYYY);
    num_dates++;
}

void addStudent() {
    clearScreen();
    if (num_students >= MAX_STUDENTS) {
        printf("Maximum number of students reached!\n");
        return;
    }

    int numToAdd;
    printf("Enter the number of students you want to add: ");
    scanf("%d", &numToAdd);

    for (int i = 0; i < numToAdd; i++) {
        printf("Enter student ID: ");
        scanf("%s", students[num_students].id); // Modified to accept character array
        printf("Enter student name: ");
        getchar(); // Clear the input buffer
        fgets(students[num_students].name, sizeof(students[num_students].name), stdin);
        students[num_students].name[strcspn(students[num_students].name, "\n")] = '\0'; // Remove newline character if present

        num_students++;
    }

    FILE *file = fopen("students.txt", "a");
    if (file == NULL) {
        printf("Error opening file to save student data.\n");
        return;
    }
    for (int i = num_students - numToAdd; i < num_students; i++) {
        fprintf(file, "%s %s\n", students[i].id, students[i].name); // Modified to use %s for ID
    }
    fclose(file);

    clearScreen();
    printf("Students added successfully!\n");
}

void displayStudents() {
    clearScreen();
    if (num_students == 0) {
        printf("No students found!\n");
        return;
    }

    printf("Student Records:\n");
    for (int i = 0; i < num_students; i++) {
        printf("ID: %s, Name: %s\n",
               students[i].id, students[i].name); // Modified to use %s for ID
    }
}

void takeAttendance() {
    clearScreen();
    if (num_students == 0) {
        printf("Please Add The Students First\n");
        return;
    }

    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &dates[num_dates].DD, &dates[num_dates].MM, &dates[num_dates].YYYY);

    char filename[50];
    sprintf(filename, "attendance_%d_%d_%d.txt", dates[num_dates].DD, dates[num_dates].MM, dates[num_dates].YYYY);
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file to save attendance data.\n");
        return;
    }

    fprintf(file, "Attendance for date %d/%d/%d:\n", dates[num_dates].DD, dates[num_dates].MM, dates[num_dates].YYYY);

    for (int i = 0; i < num_students; i++) {
        printf("ID: %s, Name: %s\tP/A: ", students[i].id, students[i].name); // Modified to use %s for ID
        scanf(" %c", &attendance[num_dates].pora[i]);
        fprintf(file, "%s,      %c,    %s\n", students[i].id, attendance[num_dates].pora[i], students[i].name); // Modified to use %s for ID
    }

    fclose(file);
    num_dates++;

    clearScreen();
    printf("Attendance taken successfully!\n");
}

void viewAttendance() {
    clearScreen();

    int DD, MM, YYYY;
    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &DD, &MM, &YYYY);

    char filename[50];
    sprintf(filename, "attendance_%d_%d_%d.txt", DD, MM, YYYY);
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("No attendance found for the given date!\n");
        return;
    }

    char line[100];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
}

void loadStudentsFromFile() {
    FILE *file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("No previous student data found.\n");
        return;
    }

    while (fscanf(file, "%s %[^\n]", students[num_students].id, students[num_students].name) == 2) {
        num_students++;
    }

    fclose(file);
}

int main() {
    clearScreen();
    loadStudentsFromFile();

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
                exit(0);
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}