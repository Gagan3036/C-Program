#include <stdio.h>
#include <stdlib.h>
struct student{
    char name[100];
    int roll_no;
    int fees;
}s[100];
int main(){
    int i, n;
    printf("Enter Students Info\n");
    printf("Enter Number of students you want to add(1-100): ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("Student %d:\n",i+1);
        printf("Name: ");
        scanf("%s",s[i].name);
        printf("Roll no: ");
        scanf("%d",&s[i].roll_no);
        printf("Fees: ");
        scanf("%d",&s[i].fees);
    }
    system("cls");//Only for windows system 
    for(i=0; i<n; i++){
        printf("Name: %s ",s[i].name);
        printf("Roll no: %d ",s[i].roll_no);
        printf("Fees: %d ",s[i].fees);
    }
    return 0;
}