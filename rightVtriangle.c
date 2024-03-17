#include <stdio.h>

int main()
{
    int n=5, i, j;
    for(i = 1; i <= n; i++){
        for(int s=1; s<= n-i; s++){
                printf(" ");
            }
        for(j = 1; j <= i; j++) {
            if((i + j) % 2 == 0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
    
    return 0;
}
