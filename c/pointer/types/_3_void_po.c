#include <stdio.h>
#define pf printf
typedef int i;
typedef float f;
typedef char c;
int main(){
    int a=10;
    float b=3.55;
    char ch='M';
    void *ptr;   //void pointer;

    ptr=&a;
    pf("a=%d\n",*(i *)ptr);

    ptr=&b;
    pf("b=%.2f\n",*(f *)ptr);

    ptr=&ch;
    pf("ch=%c\n",*(c *)ptr);
    return 0;
    
}