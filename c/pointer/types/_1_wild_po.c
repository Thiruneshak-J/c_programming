#include <stdio.h>
int main(){
    int *p;  //wild pointer
    int a=10;
    p=&a; //if *p=&a; it makes error 
    printf("a=%d",a);
    printf("*p=%d",*p);
    return 0;
}