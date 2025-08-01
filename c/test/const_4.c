#include <stdio.h>
int main(){
    const int a=5;
    int b=5,c=5,d,d1;
    d=a+b;
    printf("sum of a +b = %d\n",d);
    d1=(a+=1)+(b+=1);
    printf("sum of d1 %d",d1);
    return 0;
}