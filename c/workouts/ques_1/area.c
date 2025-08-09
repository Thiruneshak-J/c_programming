#include <stdio.h>
#define Pi 3.14
int main(){
    int rad,a;
    printf("radius of circle:");
    scanf("%d",&rad);
    a=Pi*(rad*rad);
    printf("area is %d",a);
    return 0;
}