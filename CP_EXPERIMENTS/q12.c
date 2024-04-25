#include <stdio.h>

int main(){
    int n, a[100], s, i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d",&s);
    for(i=0; i<n; i++){
        if(s==a[i]){
            printf("%d Found at %d position of an array", s, i+1);
        }
    }
    if(i>n){
        printf("Invalid Input");
    }
    return 0;
}