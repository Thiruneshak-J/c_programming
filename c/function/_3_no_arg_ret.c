//fibi -- no arguments with return
#include <stdio.h>
int fibi();
int main(){
    int fib=fibi();
    printf("fibicocci series of is %d",fib);
    return 0;
}
int fibi(){
    int n,i,a,b,c;
    printf("enter the number:");
    scanf("%d",&n);
    a=1;
    b=2;
    for(i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}