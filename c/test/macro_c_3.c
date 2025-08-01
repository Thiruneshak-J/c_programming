#include <stdio.h>
#define pi 3.14
int main(){
    int r,a;
    printf("enter the radius:");
    scanf("%d",&r);
    a=pi*(r*r);
    printf("the area of circle is %d",a);
    return 0;
}