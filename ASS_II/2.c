#include <stdio.h>
int main(){
    int size;
    printf("Number of elements: ");
    scanf("%d",&size);
    int elements[size];
    float sum=0.0;
    printf("Enter the elements: \n");
    for(int i=0; i<size; i++){
        printf("Element %d: ",i+1);
        scanf("%d",&elements[i]);
        sum += elements[i];
    }
    
    float average = sum/size;
    printf("Average of %d elements is %.2f",size,average);

    return 0;

}