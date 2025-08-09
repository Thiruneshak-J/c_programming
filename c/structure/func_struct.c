#include <stdio.h>
struct stud 
{
    char name[50];
    int age;
    int fav_num;
};
void dis(struct stud s)
{
    printf("name :%s\n",s.name);
    printf("age :%d\n",s.age);
    printf("fav_num :%d\n",s.fav_num);
}
int main()
{
    struct stud s1;
    printf("enter the name:");
    scanf("%s",s1.name);
    printf("enter the age:");
    scanf("%d",&s1.age);
    printf("enter the fav_num:");
    scanf("%d",&s1.fav_num);
    dis(s1);
    return 0;

}