#include <stdio.h>

void swap(int *a, int *b);
int main()
{
   //call by refrance
    int a=10, b=20;
    printf("%d %d",a ,b);
    swap(&a,&b);
    printf("\n%d %d",a ,b);
    return 0;
}
void swap(int*a, int*b){
    int t;
    *a=30, *b=40;
    printf("\n%d %d", *a, *b);
    t=*a;
    *a=*b;
    *b=t;
    printf("\n%d %d", *a, *b);
}
