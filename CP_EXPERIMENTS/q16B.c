#include <stdio.h>
int main(){
    int a, b, temp;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swap: a=%d, b=%d",a,b);
    int *p=&a, *q=&b;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("\nAfter swap: a=%d, b=%d",a,b);
    return 0;
}