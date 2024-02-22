#include<stdio.h>
int main(){
 int i,j;
 
 //Nested For loop 
 for(i=1;i<=5;i++){ /*(initialize 1, to final row 5, i++ to adding 1 to 5 ).
 i<=5 contionalized with number of rows*/
    
    for(j=1;j<=i;j++){ /*(initialized 1, to final value i, adding).
    j<=i is conditionalized with current value of i*/
        printf("*");
    }
    
    printf("\n");//to make new line after every iteration
 }
 return 0;
}
