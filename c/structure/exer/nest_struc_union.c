#include <Stdio.h>
#include <string.h>
#pragma pack(1)
union det
{
    char dept;
    int roll; //this will be size of union
};

struct detail
{
    char name[50];
    int id;
    union det d;
};
#pragma pack()
int main()
{
    struct detail dt;
    strcpy(dt.name,"thiru");
    dt.id=108;
    dt.d.dept='a';
    dt.d.roll=35;
    printf("name :%s\n",dt.name);
    printf("id = %d\n",dt.id);
    printf("dept :%c\n",dt.d.dept);
    printf("roll :%d\n",dt.d.roll);
    return 0;
}