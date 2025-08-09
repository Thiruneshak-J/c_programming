#include <stdio.h>
struct car
{
    char name[50];
    int age;
};
int main()
{
    struct car c1;
    printf("enter the name:");
    scanf("%s",c1.name);
    printf("enter the age:");
    scanf("%d",&c1.age);
    printf("name :%s\n",c1.name);
    printf("age:%d",c1.age);
    
}