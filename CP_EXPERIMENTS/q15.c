#include <stdio.h>
#include <string.h>
int main(){
    char s1[100], s2[100],n,i,j,flag;
    printf("Enter the string: ");
    scanf("%s",s1);
    
    n = strlen(s1);

    for(i=0,j=n-1; i<n; i++,j--){
        s2[j]=s1[i];
    }
    s2[n]='\0';

    flag = strcmp(s1,s2);

    if(flag==0){
        printf("String is palindrom");
    }
    else{
        printf("String is not palindrom");
    }
}