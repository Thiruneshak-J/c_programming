#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
struct car
{
    char *name;
    int num;
    char *date;
};
struct car1
{
    int seater;
    char *avai;
    struct car c;
};
#pragma pack()
int main()
{
    struct car1 c1;
    c1.c.name=malloc(20*(sizeof(char)));
    if(c1.c.name==NULL)
    {
        printf("memory not allocated");
        return 1;
    }
    c1.c.date=malloc(20*(sizeof(char)));
    if(c1.c.date==NULL)
    {
        printf("memory not allocated");
        return 1;
    }
    c1.avai=malloc(5*(sizeof(char)));
    if(c1.avai==NULL)
    {
        printf("memory not allocated");
        return 1;
    }
    printf("enter the car name:");
    scanf("%s",c1.c.name);
    printf("enter the model number:");
    scanf("%d",&c1.c.num);
    printf("enter the manufacture date:");
    scanf("%s",c1.c.date);
    printf("enter the seater(5 or 7):");
    scanf("%d",&c1.seater);
    printf("enter the availability(yes or no):");
    scanf("%s",c1.avai);

    struct car1 *cc=&c1;

    printf("name of the car    :%s\n",cc->c.name);
    printf("model number       :%d\n",cc->c.num);
    printf("manufacture date   :%s\n",cc->c.date);
    printf("seater             :%d\n",cc->seater);
    printf("availability       :%s\n",cc->avai);
    printf("----------------------------------------------------------------------\n");
    printf("size of struct : %d",sizeof(struct car1));
    free(c1.c.name);
    free(c1.c.date);
    free(c1.avai);
    return 0;



}