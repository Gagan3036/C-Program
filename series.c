//Exp 08
#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int main() {
    int n;
    float sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= (float)i / factorial(i);
        } else {
            sum += (float)i / factorial(i);
        }
    }

    printf("Sum of the series: %f", sum);

    return 0;
}
