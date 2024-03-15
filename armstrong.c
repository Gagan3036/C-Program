#include <stdio.h>
int arm(int n);

int main()
{
    int n;
    printf("Enter three digit number: ");
    scanf("%d", &n);
    arm(n);
    return 0;
}

int arm(int n){
    int t, t1, d;
    t=n;
    while(n!=0){
        d=n%10;
        t1+=d*d*d;
        n/=10;
    }
    
    if(t1==t){
        printf("%d is Armstrong number.",t);
    }
    else{
        printf("%d is not Armstrong number.",t);
    }
}
