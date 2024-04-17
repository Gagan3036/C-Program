#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void viewAttendance() {
    clearScreen();

    FILE *file = fopen("attendance.txt", "r");
    if (file == NULL) {
        printf("No attendance file found!\n");
        return;
    }

    char line[100];
    char dateStr[20];
    sprintf(dateStr, "%d/%d/%d:", 12, 4, 2024); // Adjust the date accordingly

    int found = 0;

    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, dateStr) != NULL) {
            found = 1;
            printf("%s", line);  // Print the header line
            while (fgets(line, sizeof(line), file)) {
                if (strstr(line, "Attendance for date") != NULL) // Next date entry encountered
                    break;
                printf("%s", line);
            }
            break;
        }
    }

    fclose(file);

    if (!found) {
        printf("No attendance found for the given date!\n");
    }
}

int main() {
    viewAttendance();
    return 0;
}
