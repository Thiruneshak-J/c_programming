#include <stdio.h>
struct stud
{
    char name[50];
    int age;
    char gen[50];
};
int main()
{
    struct stud s;
    printf("enter the name:");
    scanf("%s",s.name);
    printf("enter the age:");
    scanf("%d",&s.age);
    printf("enter the gender:");
    scanf("%s",s.gen);
    struct stud *ptr=&s;
    printf("student name %s\n",ptr->name);
    printf("student age %d\n",ptr->age);
    printf("student gender %s\n",ptr->gen);
}