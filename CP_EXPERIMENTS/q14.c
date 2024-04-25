#include <stdio.h>

int main(){
    int r, c, a[100][100], i, j, sum=0;
    printf("Enter the row and column: ");
    scanf("%d %d",&r,&c);
    if(r==c){
        printf("Enter elements: \n");
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){
                printf("a[%d][%d]: ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }
        printf("Matrix: \n");
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }

        for(i=0; i<r; i++){
                sum += a[i][i];
        }
        printf("Sum of diagonal elements is: %d",sum);
    }
    else{
        printf("Only Square Matrix Are Allowed");
    }
    return 0;
}