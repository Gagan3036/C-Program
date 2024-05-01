#include <stdio.h>
int main(){
    int n,num,largest;
    printf("Enter the numbers of elements you want to add: ");
    scanf("%d",&n);
    printf("Element 1: ");
    scanf("%d",&largest);
    for(int i=1; i<n; i++){
        printf("Element %d: ",i+1);
        scanf("%d",&num);
        if(num>largest){
            largest = num;
        }
    }
    printf("Laregst number: %d",largest);
    return 0;
}