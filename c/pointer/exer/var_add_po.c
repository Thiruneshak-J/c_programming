#include <stdio.h>
int main()
{
    int a=10;
    int *pt=&a;
    printf("value of a with *pt is %d\n",*pt);
    printf("address of a is %p with *p\n",pt);
    printf("address of a with a %p\n",&a);
    printf("value of a with a %d\n",a);
    return 0;
}