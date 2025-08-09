#include <stdio.h>
int main(){
    int a=5;
    int *p=&a;
    //int *q=a; error  beacuse not & symboal;
    int **d=&p;
    printf("p is %d\n",p);
    printf("&a is %d\n",&a);
    printf("*p is %d\n",*p);
    printf("a is %d\n",a);
    printf("**d is %d\n",**d);
    
}