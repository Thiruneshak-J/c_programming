#include <stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int re=0,rm;
    while(n!=0){
        rm=n%10;
        re=re*10+rm;
        n/=10;
    }
    printf("reverse number = %d",re);
    return 0;
}