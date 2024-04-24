#include <stdio.h>

int main(){
    int a, ir, t;
    printf("\tSimple Interest Calculator:\nEnter the amount: ");
    scanf("%d",&a);
    printf("Enter the interest rate: ");
    scanf("%d",&ir);
    printf("Enter the period of year: ");
    scanf("%d",&t);
    float si = (a * ir * t)/100;
    printf("Simple Interest: %.2f",si);
    return 0;
}