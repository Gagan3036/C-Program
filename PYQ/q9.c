#include <stdio.h>
#include <string.h>
int main(){
    char s1[]="hello";
    char s2[]="World";
    int r = strcmp(s1,s2);
    if(r==0){
        printf("Strings are equal");
    }
    else{
        printf("Strings are not equal");
    }
    return 0;
}