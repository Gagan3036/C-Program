#include <stdio.h>
#include <string.h>

void checkDigitFrequency(char *str) {
    int frequency[10] = {0}; // Initialize frequency array to 0

    // Iterate through the string
    for(int i = 0; i < strlen(str); i++) {
        // Check if the character is a digit
        if(str[i] >= '0' && str[i] <= '9') {
            // Increment the frequency of the digit
            frequency[str[i] - '0']++;
        }
    }

    // Print the frequency of each digit
    for(int i = 0; i < 10; i++) {
        if(frequency[i] > 0) {
            printf("%d",frequency[i]);
        }
    }
}

int main() {
    char str[] = "767612";
    checkDigitFrequency(str);
    return 0;
}
