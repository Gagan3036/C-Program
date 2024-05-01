#include <stdio.h>

int main() {
    printf("char = %lu\n", sizeof(char)); // Output: 1
    printf("int = %lu\n", sizeof(int)); // Output: 4
    printf("float = %lu\n", sizeof(float)); // Output: 4
    printf("double = %lu\n", sizeof(double)); // Output: 8
    printf("unsigned int = %lu", sizeof(unsigned int));
    return 0;
}