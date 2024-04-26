#include <stdio.h>

// Define a structure for cricketer
struct Cricketer {
    char name[50];
    int runs;
    int wickets;
};

int main() {
    int n;

    printf("Enter the number of cricketers: ");
    scanf("%d", &n);

    // Declare an array of structures
    struct Cricketer players[n];

    // Input data for each cricketer
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Cricketer %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", players[i].name);
        printf("Runs: ");
        scanf("%d", &players[i].runs);
        printf("Wickets: ");
        scanf("%d", &players[i].wickets);
    }

    // Display data for each cricketer
    printf("\nDetails of Cricketers:\n");
    for (int i = 0; i < n; i++) {
        printf("\nCricketer %d:\n", i + 1);
        printf("Name: %s\n", players[i].name);
        printf("Runs: %d\n", players[i].runs);
        printf("Wickets: %d\n", players[i].wickets);
    }

    return 0;
}
