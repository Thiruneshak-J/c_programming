#include <stdio.h>
int fac(int n);
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int res=fac(n);
    printf("factorial of %d numbers are %d",n,res);
    return 0;
}
int fac(int n){
    int temp=1,i;
    for(i=1;i<=n;i++){
        temp*=i;
    }
    return temp;
}