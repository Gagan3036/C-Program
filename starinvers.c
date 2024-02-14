#include<stdio.h>
int main() {
    int  i, j, n;
    
    printf("Enter Number Of Rows:- ");
    scanf("%d", &n);

    //Nested For Loop 
    for(i=n;i>=1;i--) {
        for (j = 1; j <= i; j++ ){
            printf("*");
        }
    printf("\n");
    }
    return 0;
}