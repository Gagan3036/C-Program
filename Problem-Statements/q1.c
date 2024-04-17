//Write a program in C to find the average of N elements entered by a user using an array.
#include <stdio.h>
#include <stdlib.h>
int main(){
    system("cls");
    int n;
    printf("Enter The Number Of Elements: ");
    scanf("%d",&n);

    int a[n], sum=0;
    printf("Enter the Elements: ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("Average Of %d Elements Is %.2f",n,(float)sum/n);

    return 0;
}