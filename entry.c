#include<stdio.h>
int main () {
    //Entry control loop 
    int i=1, sum;
    while(i<=10){  //condition i, 1-->10 will execute first simultaneously 
        printf("%d\n",i); //simultaneously printing of i after chacking i<=10
        i++;
    }
}