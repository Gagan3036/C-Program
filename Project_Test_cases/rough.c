#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define str_size 100

int main() {
    char str[str_size], digit[str_size]; 
    int i, j=0; 

    printf("Input the string : ");
    fgets(str, sizeof str, stdin); 


    for (i = 0; str[i]!= '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            digit[j] = str[i]; 
            j++;
        }
    }

    for(i = 0; digit[i] >= '0' && digit[i] <= '9'; i++){
        printf("%c",digit[i]);
    }

    return 0; 
}
