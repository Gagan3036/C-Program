#include<stdio.h>
int main() {
    int no, sum=0, temp, r;

    printf("Enter Three Digit No:- ");
    scanf("%d", &no);
    temp=no;

    while(no > 0) {
        r = no%10;
        sum=sum+r*r*r;
        no = no/10;
    }
    
    if(temp == sum) {
        printf("\n %d Is An Armstrong Number",  temp);
    }
    else {
        printf( "\n %d Is Not An Armstrong Number", temp);
    }
    return 0;

}