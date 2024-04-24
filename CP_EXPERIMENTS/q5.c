#include <stdio.h>

int isarmstrong(int num);

int main(){
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    if(isarmstrong(num)){
        printf("%d is an armstrong number",num);
    }
    else{
        printf("%d is not an armstrong number",num);
    }
    return 0;
}

int isarmstrong(int num){
    int i, sum=0, count=num, temp;
    while(count!=0){
        temp=count%10;
        sum+=(temp*temp*temp);
        count=count/10; 
    }
    if(sum==num){
        return 1;
    }
    else{
        return 0;
    }

}