#include <stdio.h>
int main(){
    int a[100][100], b[100][100], r, c, i,j;
    printf("Enter the row and column: ");
    scanf("%d %d",&r,&c);
    printf("Enter the elements:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("a[%d][%d] = ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Befor transpose: \n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ",a[i][j]);
            b[i][j]=a[j][i];
        }
        printf("\n");
    }

    printf("After transpose: \n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}