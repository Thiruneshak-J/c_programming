#include <stdio.h>
int main(){
    int *p=NULL;  //null pointer
    // int *p;  //wild pointer ---> it is dangesous;
    int a=10;
    p=&a;
    printf("a=%d",a);
    printf("*p=%d",*p);
    return 0;
}