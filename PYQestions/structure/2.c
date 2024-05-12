#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 100

// Employee structure
struct Employee {
    char name[50];
    int age;
    float salary;
    int id;
};

// Function to swap two employee structures
void swap(struct Employee *a, struct Employee *b) {
    struct Employee temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int choice, n;

    // Input the number of employees
    printf("Enter the number of employees (max 100): ");
    scanf("%d", &n);

    if (n > MAX_EMPLOYEES) {
        printf("Exceeded maximum number of employees.\n");
        return 1;
    }

    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        employees[i].id = i + 1; // Assigning IDs sequentially
    }

    // Select sorting criteria
    printf("Sort by:\n");
    printf("1. Age\n");
    printf("2. ID\n");
    printf("3. Name\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Sort employees based on the chosen criteria
    switch (choice) {
        case 1:
            // Sort by age
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                    if (employees[j].age > employees[j + 1].age) {
                        swap(&employees[j], &employees[j + 1]);
                    }
                }
            }
            break;
        case 2:
            // Sort by ID
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                    if (employees[j].id > employees[j + 1].id) {
                        swap(&employees[j], &employees[j + 1]);
                    }
                }
            }
            break;
        case 3:
            // Sort by name
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                    if (strcmp(employees[j].name, employees[j + 1].name) > 0) {
                        swap(&employees[j], &employees[j + 1]);
                    }
                }
            }
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    // Display sorted employee details
    printf("\nSorted Employee Details:\n");
    printf("ID\tName\tAge\tSalary\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%d\t%.2f\n", employees[i].id, employees[i].name, employees[i].age, employees[i].salary);
    }

    return 0;
}
