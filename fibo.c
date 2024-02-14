#include<stdio.h>

int main() {
    long double n1 = 0, n2 = 1, n3;
    int num;

    // Get user input
    printf("Enter the number of Fibonacci terms to print: ");
    scanf("%d", &num);

    // Check if the input is a positive integer
    if (num <= 0) {
        printf("Error: The input must be a positive integer.\n");
        return 1;
    }

    // Calculate Fibonacci sequence
    printf("Fibonacci sequence: ");
    int i = 1;
    while (i <= num) {
        printf("%Lf \t", n1);
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        i++;
    }
    printf("\n");

    return 0;
}