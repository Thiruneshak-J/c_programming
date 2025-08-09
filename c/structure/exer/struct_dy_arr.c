#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf
#pragma pack(1)
struct contact
{
    double ph_no;
    char *address;
    char email[50];
};
struct stud 
{
    char *name;
    int age;
    char *gen;
    struct contact co;
};
#pragma pack()
int main()
{
    printf("size of stud:%d\n",(int)sizeof(struct stud));
    printf("------------------------------------------------------------------------\n");
    int n;
    pf("how many details want to enter :");
    sf("%d",&n);
    struct stud *s;
    s=malloc(n*sizeof(struct stud));
    if(s==NULL)
    {
        pf("memory is not allocated");
        return 1;
    }
    int i;
    for(i=0;i<n;i++)
    {
        s[i].name=malloc(50*(sizeof(char)));
        if(s[i].name==NULL)
        {
            pf("memory is not allocated");
            return 1;
        }
        s[i].gen=malloc(50*(sizeof(char)));
        if(s[i].gen==NULL)
        {
            pf("memory is not allocated");
            return 1;
        }
        s[i].co.address=malloc(50*(sizeof(char)));
        if(s[i].co.address==NULL)
        {
            pf("memory is not allocated");
            return 1;
        }

        pf("enter the name :");
        sf("%s",s[i].name);
        pf("enter the age:");
        sf("%d",&s[i].age);
        pf("enter the ph_number:");
        sf("%lf",&s[i].co.ph_no);
        pf("enter the gender:");
        sf("%s",s[i].gen);
        pf("enter the address:");
        sf("%s",s[i].co.address);
        pf("enter the email:");
        sf("%s",s[i].co.email);
    }
    pf("you entered details are:");
    for(i=0;i<n;i++)
    {
        pf("name is   :%s\n",s[i].name);
        pf("age  is   :%d\n",s[i].age);
        pf("ph_no is  :%.0lf\n",s[i].co.ph_no);
        pf("gender is :%s\n",s[i].gen);
        pf("addres is :%s\n",s[i].co.address);
        pf("email is  :%s\n",s[i].co.email);
        pf("-------------------------------------------\n");
    }
    free(s);
    return 0;
}
