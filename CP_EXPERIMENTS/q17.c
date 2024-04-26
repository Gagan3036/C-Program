#include <stdio.h>
int main(){
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int *p=&a, *q=&b;
    sum = *p + *q;
    printf("\nSum: %d",sum);
    return 0;
}