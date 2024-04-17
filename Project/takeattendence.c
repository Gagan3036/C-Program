#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_STUDENTS 100
#define DATE 365

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
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

void takeAttendance() {
    clearScreen();
    if (num_students == 0) {
        printf("Please Add The Students First\n");
        return;
    }

    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &dates[num_dates].DD, &dates[num_dates].MM, &dates[num_dates].YYYY);

    FILE *file = fopen("attendance.txt", "a");
    if (file == NULL) {
        printf("Error opening file to save attendance data.\n");
        return;
    }

    fprintf(file, "Attendance for date %d/%d/%d:\n\n", dates[num_dates].DD, dates[num_dates].MM, dates[num_dates].YYYY);

    // Find the maximum length of student ID to properly align the data
    int max_id_length = 0;
    for (int i = 0; i < num_students; i++) {
        int id_length = strlen(students[i].id);
        if (id_length > max_id_length) {
            max_id_length = id_length;
        }
    }

    // Print attendance data with proper alignment
    for (int i = 0; i < num_students; i++) {
        fprintf(file, "%-*s   %c   %s\n", max_id_length, students[i].id, attendance[num_dates].pora[i], students[i].name);
    }

    fclose(file);
    num_dates++;

    clearScreen();
    printf("Attendance taken successfully!\n");
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
};
void main(){
    loadStudentsFromFile();
    //takeAttendance();
    size_t a;
    printf("%d",a);
}