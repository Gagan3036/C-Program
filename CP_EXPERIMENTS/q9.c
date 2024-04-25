#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main(){
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD: %d",gcd(a,b));
    printf("\nLCM: %d",lcm(a,b));
    return 0;
}

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}

int lcm(int a, int b){
    int GCD_VALUE = gcd(a, b);
    int LCM_VALUE = (a * b)/GCD_VALUE;
    return LCM_VALUE;
}