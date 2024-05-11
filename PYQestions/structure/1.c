#include <stdio.h>

struct employee{
    int empoyee_no;
    char employee_name[50];
    int experience;
    float salary;
};

int main(){
    int max_employee;
    printf("Enter number of employee you want to add: ");
    scanf("%d",&max_employee);

    struct employee employees[max_employee];

    printf("Enter employee details: ");
    for(int i=0; i<max_employee; i++){
        printf("write Employee number, name, experience(no.), salary: ");
        scanf("%d %s %d %f",&employees[i].empoyee_no, employees[i].employee_name, &employees[i].experience, &employees[i].salary);
    }

    printf("Entered Details: ");
    for(int i=0; i<max_employee; i++){
        if(employees[i].experience >= 5 && employees[i].salary < 10000){
            printf("Employee number:%d, Name:%s, Experience:%d, Salary:%.2f",employees[i].empoyee_no, employees[i].employee_name, employees[i].experience, employees[i].salary);
        }
    }
    return 0;
}