#include <stdio.h>
int main()
{
    int n, d, sum=0, temp;
    printf("\n Enter a number : ");
    scanf("%d", &n);
    temp = n;
    while(n != 0)
    {
        d= n% 10;
        sum = sum + (d* d* d);
        n = n/10;
    }
    if (sum==temp)
    {
        printf("n number is Armstrong");
    }
    else
    printf("\n Number is not Armstrong.");
}
