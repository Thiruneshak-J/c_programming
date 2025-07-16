#include <stdio.h>
int main(){
    int a,b,lcm,min,i,gcd=1;
    printf("A number:");
    scanf("%d",&a);
    printf("B number:");
    scanf("%d",&b);
    min=(a<b)?a:b;
    for(i=2;i<=min;i++){
        if (a%i==0 && b%i==0){
            gcd=i;
        }
    }
    lcm=a*b/gcd;
    printf("the lcm of %d and %d is %d",a,b,lcm);
    return 0;
}