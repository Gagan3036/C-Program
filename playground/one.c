#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add_spaces(const char *input, char *output){
        int j=0;
        for(int i=0; i<strlen(input); i++){
            output[j++]=input[i];
            output[j++]=' ';
        }
    }

int main(){
    char input[] = "hello";
    char output[2 * sizeof(input)-1];

    printf("%c\n",input[1]);
    printf("%d\n",strlen(input));
    printf("%d\n",sizeof(input));
    printf("%d\n",strlen(output));
    printf("%d\n",sizeof(output));

    add_spaces(input,output);

    printf("%s\n",output);
    printf("%d\n",strlen(output));
    printf("%d\n",sizeof(output));
    printf("%d\n",output[1]);
    return 0;
}