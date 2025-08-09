#include <stdio.h>
#include <string.h>
struct add_det
{
    char addr[100];
    char gen[10];
    
};
struct det
{
    char name[50];
    int age;
    double ph_no;
    struct add_det ad;
};
int main()
{
    int n,i;
    printf("how many details want to enter:");
    scanf("%d",&n);
    struct det d[n];
    for(i=0;i<n;i++)
    {
    printf("enter the name:");
    scanf("%s",d[i].name);
    printf("enter the age:");
    scanf("%d",&d[i].age);
    printf("enter the ph_number:");
    scanf("%lf",&d[i].ph_no);
    printf("enter the address :");
    scanf("%s",d[i].ad.addr);
    printf("enter the gender:");
    scanf("%s\n",d[i].ad.gen);
    }
    printf("you entered details are:\n");
    for(i=0;i<n;i++)
    {
    printf("name :%s\n",d[i].name);
    printf("age :%d\n",d[i].age);
    printf("phone number :%.lf\n",d[i].ph_no);
    printf("address  :%s\n",d[i].ad.addr);
    printf("gender : %s",d[i].ad.gen);
    }
    return 0;
}