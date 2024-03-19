#include <stdio.h>

int main()
{   
    int i, j, n, m;
    printf("Enter Number Of Row And Column: ");
    scanf("%d %d", &n, &m);
    int a[n][m];
    for(i=0; i<n; i++)
        for(j=0; j<m; j++){
            printf("Enter Elements of [%d,%d]: ",i+1, j+1);
            scanf("%d",&a[i][j]);
        }
        
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
