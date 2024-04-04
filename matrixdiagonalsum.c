#include <stdio.h>

int main()
{   
    int i, j, r, c, sum=0;
    printf("Enter Number Of Row And Column: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    for(i=0; i<r; i++)
        for(j=0; j<c; j++){
            printf("Enter Elements of [%d,%d]: ",i+1, j+1);
            scanf("%d",&a[i][j]);
        }
        
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
   for(i=0,j=c-1; i<r && j>=0; i++,j--){
        sum += a[i][j];
    }
     printf("%d",sum);
    return 0;
}
