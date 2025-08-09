#include <stdio.h>
int main(){
    //const int *p;              value cannot change but pointer address can change.
    //int *const p;              value can change but pointer address cannot change.
    //const int const *p;        value cannot change , pointer address cannot change.
    int a=10,b=20;
    const int *p=&a;
    p=&b;   //--> yes it will change because value is constant not pointer
    printf("*p=%d\n",*p);

    int c=20,d=40;
    int *const pt=&c;
    //pt=&d;  //---> no it show error because pointer is constant
    printf("*pt = %d\n",*pt);

    //const int const *p; both are constant;


}