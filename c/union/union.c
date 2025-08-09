#include <stdio.h>
union stud
{
    int age;
    char name;
};
int main()
{
    union stud s;
    s.age=21;
    printf("age:%d",s.age);
    s.name='t';
    printf("name :%s",s.name);
}