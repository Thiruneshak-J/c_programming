#include <stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
struct call
{
    int(*addp)(int,int);
    int(*subp)(int,int);
    int(*mulp)(int,int);
};
int main()
{
    struct call c;
    c.addp=add;
    c.subp=sub;
    c.mulp=mul;

    printf("addition     : %d\n",c.addp(5,6));
    printf("subtraction  : %d\n",c.subp(8,2));
    printf("multipy      : %d\n",c.mulp(34,2));
    return 0;
}