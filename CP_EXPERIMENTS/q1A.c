#include <stdio.h>

int main(){
    int a, b, temp;
    printf("Enter The Two Numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swap: %d %d\n", a, b);
    temp=a;
    a=b;
    b=temp;
    printf("After swap: %d %d", a, b);
    
    return 0;
}
