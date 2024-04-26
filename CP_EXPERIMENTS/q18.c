#include <stdio.h>
struct employee
{
    char name[10];
    int age, dd, mm, yyyy;
    float sal;
};
void main()
{
    struct employee e1, e2;
    printf("\n Enter Employee Info");
    printf("\n Enter name, age, salary & date(dd/mm/yyyy): ");
    scanf("%s %d %f %d %d %d", &e1.name, &e1.age, &e1.sal, &e1.dd, &e1.mm, &e1.yyyy);
    printf("%s\n%d\n%f\n%d %d %d\n", e1.name, e1.age, e1.sal, e1.dd, e1.mm, e1.yyyy);
}
