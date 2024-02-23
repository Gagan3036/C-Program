#include <stdio.h>

long factorial(int n) { // Use long to handle larger factorials
    if (n < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return -1; // Indicate error
    } else if (n == 0) {
        return 1; // Base case: factorial of 0 is 1
    } else {
        long result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}

int main() {
    int number;

    printf("Enter a non-negative integer to find its factorial: ");
    scanf("%d", &number);

    long result = factorial(number);

    if (result == -1) { // Handle error from factorial function
        // Error message already printed in factorial
    } else {
        printf("Factorial of %d is %ld\n", number, result);
    }

    return 0;
}
