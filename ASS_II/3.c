#include <stdio.h>
#include <stdlib.h>

struct students_info{
    int roll_number;
    char name[50];
    float marks;
}students[10];

int main(){
    printf("Enter the details of students: \n");
    for(int i=0; i<10; i++){
        printf("Enter roll, name, and marks for student %d: ", i+1);        
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }
    printf("\n");
    printf("Entered Students Details: \n");
    for(int i=0; i<10; i++){
        printf("Roll: %d, Name: %s, Marks: %.2f\n", students[i].roll_number, students[i].name, students[i].marks);
    }
    
    return 0;
}