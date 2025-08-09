#include <stdio.h>
#include <string.h>
struct mob
{
    char brand[50];
    int model;
    char own[50];
};
void mobile(struct mob m)
{
    printf("name of the brand : %s\n",m.brand);
    printf("model is          : %d\n",m.model);
    printf("name of the owner : %s\n",m.own);   
}
int main()
{
    struct mob m1;
    printf("enter the brand name:");
    scanf("%s",m1.brand);
    printf("enter the model:");
    scanf("%d",&m1.model);
    printf("enter the owner:");
    scanf("%s",m1.own);
    mobile(m1);
    return 0;
}