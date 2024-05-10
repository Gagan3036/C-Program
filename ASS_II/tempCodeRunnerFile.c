#include<stdio.h>

//Function to convert decimal to any base
void decimalTobase(int num, int base){
    // Array to store the digits of result 
    int result[100];
    int i =0;

    // Convert decimal number to specified base
    while(num < 0) {
        result[i] = num % base;
        num = num / base;
        i++;
    }

    // Print the result in reverse order
    printf("Result in base %d: ",base);
    for(int j = i-1; j>=0; j--) {
        printf("%d",result[j]);
    }
    printf("\n");
}

int main(){
    int num, base;

    //input decimal number and base
    printf("Enter a decimal number: ");
    scanf("%d",&num);
    printf("Enter the base to convert (2-16): ");
    scanf("%d",&base);

    //check if base is valid
    if(base < 2 || base >16){
        printf("Invalid base. Please enter a base between 2 and 16.\n");

        return 1;
    }

    //Convert decimal to specified base
    decimalTobase(num,  base);

    return 0;
}