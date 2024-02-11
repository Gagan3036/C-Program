//Traffic Light Stimulation
#include<stdio.h>
int main(){
    char color;

    printf("Enter The Traffic Light Color (R, Y, G): ");
    scanf("%c",&color);

    if(color=='R','r'){
        printf("STOP\n");
    }
    else if(color=='Y','y'){
        printf("CAUTION\n");
    }
    else if(color=='G','g'){
        printf("GO\n");
    }
    else{
        printf("Invalid Color\n");
    }
    return 0;
}