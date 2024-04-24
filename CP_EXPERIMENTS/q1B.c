#include <stdio.h>

int main(){
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Befor Swap: %d %d\n", a, b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swap: %d %d", a, b);
    return 0;
}