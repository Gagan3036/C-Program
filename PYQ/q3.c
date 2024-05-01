#include <stdio.h>
#include <math.h>

int main() {
    double base, exponent, result;

    // Input base and exponent
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &exponent);

    // Calculate power
    result = pow(base, exponent);
    printf("Result of %.2lf raised to %.2lf is %.2lf\n", base, exponent, result);

    // Calculate ceiling of result
    double ceilResult = ceil(result);
    printf("Ceiling of %.2lf is %.2lf\n", result, ceilResult);

    // Calculate floor of result
    double floorResult = floor(result);
    printf("Floor of %.2lf is %.2lf\n", result, floorResult);

    return 0;
}
