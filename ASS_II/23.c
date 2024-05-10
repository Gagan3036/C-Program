#include <stdio.h>

void convertToBase(int decimal, int base) {
    if (decimal == 0) {
        printf("0");
        return;
    }
    int remainder;
    while (decimal > 0) {
        remainder = decimal % base;
        if (base == 2) {
            // For binary, store the remainder in a stack and print it in reverse order
            if (remainder == 1) {
                printf("1");
            } else {
                printf("0");
            }
        } else if (base == 8) {
            printf("%o", remainder); // Use %o for octal
        } else if (base == 16) {
            printf("%x", remainder); // Use %x for hexadecimal
        } else {
            printf("%d", remainder);
        }
        decimal = decimal / base;
    }
    printf("\n");
}

int main() {
    int decimalNumber, base;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    printf("Enter the base to convert to: ");
    scanf("%d", &base);

    printf("The number in base %d is: ", base);
    convertToBase(decimalNumber, base);

    return 0;
}
