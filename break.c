#include<stdio.h>
int man() {
    /*Break statement:- Skips all remaining iterations and come out
    of the loop */
    int i;
    for(i = 1; i <=10; i++) {
        printf("%d\n",i);
        if (i == 5){
            break; //After reaching 5 it will break the loop 
        }
    }
}
