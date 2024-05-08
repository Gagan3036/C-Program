#include <stdio.h>
#include <math.h>

int main() {
    int base, power;
    double result;
    printf("Enter Base: ");
    scanf("%d", &base);
    printf("Power: ");
    scanf("%d", &power);
    result = pow(base, power);
    printf("%d raised to the power of %d is %.0f", base, power, result);
    return 0;
}
