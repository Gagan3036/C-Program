#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char line[256];
    char targetDate[20]; // Assuming date format is MM/DD/YYYY

    // Input the target date
    printf("Enter the date (MM/DD/YYYY): ");
    fgets(targetDate, sizeof(targetDate), stdin);
    targetDate[strcspn(targetDate, "\n")] = '\0'; // Remove newline character

    // Open the file
    file = fopen("attendance.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read the file line by line
    while (fgets(line, sizeof(line), file)) {
        // Check if the line contains the target date
        if (strstr(line, targetDate) != NULL) {
            // Print the line containing the target date
            printf("%s", line);

            // Print subsequent lines until a line without "Attendance for date" is encountered
            while (fgets(line, sizeof(line), file) != NULL && strstr(line, "Attendance for date") == NULL) {
                printf("%s", line);
            }

            // Break the loop if the end of file is reached
            if (feof(file)) {
                break;
            }
        }
    }

    // Close the file
    fclose(file);

    return 0;
}
