#include <stdio.h>
int factorial(int n);
int main(){
    int n, r;
    printf("Enter the number: ");
    scanf("%d",&n);
    r = factorial(n);
    printf("Factorial of %d if %d",n,r);
    return 0;
} 
int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}