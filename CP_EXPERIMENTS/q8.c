#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n, i;
    float sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0)
            sum -= (float)i / factorial(i);
        else
            sum += (float)i / factorial(i);
    }

    printf("Sum of the series is: %.2f\n", sum);

    return 0;
}
