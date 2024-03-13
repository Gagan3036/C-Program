#include <stdio.h>

void swapx(int x, int y);

int main()
{
    int a, b;
    
    printf("Enter two numbers:- ");
    scanf("%d %d", &a, &b);
    swapx(a,b);
    printf("\t%d %d", a, b);

    return 0;
}

void swapx(int x, int y){
    int t;
    t=x;
    x=y;
    y=t;
    printf("%d %d", x, y);
}
