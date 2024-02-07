#include<stdio.h>
int main()
{
    int a, b, c, largest;
    printf("Enter three numbers:- ");
    scanf("%d%d%d",&a,&b,&c);
    
    //Using Ternary Operator
    
    largest = (a>b && a>c)?a:((b>c)?b:c); 
    printf("\n The Largest number is:%d",largest);
    return 0; 
}