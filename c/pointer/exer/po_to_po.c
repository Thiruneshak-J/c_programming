#include <stdio.h>
int chang(int **pp)
{
    **pp=100;
    return **pp;

}
int main()
{
    int a=10;
    int *p=&a;
    int **pp=&p;
    printf("before a = %d\n",a);
    int res=chang(pp);
    printf("After a =%d\n",a);
    printf("result=%d",res);
    return 0;



}