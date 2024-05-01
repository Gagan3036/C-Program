#include <stdio.h>
#include <math.h>

double power(double x, double n);

int main(){
    double x, r;
    int n;

    printf("Enter value of x and n: ");
    scanf("%lf %d",&x,&n);

    r = power(x,n);

    printf("y = %.2lf",r);

    return 0;
}

double power(double x, double n){
    if(n==0){
        return 1;
    }
    else if(n>0){
        return x * pow(x, n-1);
    }
    else {
        return (1/x) * pow(1/x, n-1);
    }
}