#include <stdio.h>

int main()
{   
    int i, n;
    printf("Number Of Students:- ");
    scanf("%d", &n);
    int a[n];
    for(i=1; i<=n; i++)
    {   
        printf("Enter Mark Of Roll no %d:- ", i);
        scanf("%d", &a[i]);
    }
    printf("\n%d", a[2]);
    return 0;
}

