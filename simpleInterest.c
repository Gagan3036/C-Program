#include<stdio.h>
int main()
{
    int amt, ir, period, value, total;
    printf("Enter the amount taken, interest rate and, time period of amount taken:- ");
    scanf("%d %d %d", &amt, &ir, &period);
 
    //Applying formula  to calculate simple interest 
    value = (amt * ir) / 100 ;
    total = amt + value;
    printf("\n The Simple Interest Is:- %d\n",value);
    printf("\n Total Amount After Simple Interest Is:- %d\n",total);
 
    return 0;
}