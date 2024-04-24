#include <stdio.h>
int main(){
    int i, j, r;
    printf("Enter row: ");
    scanf("%d",&r);
    for(i=1; i<=r; i++){
        for(j=1; j<=(r+1)-i; j++){
            printf("%c",64+j);
        }
        printf("\n");
    }
    return 0;
}