//fac --- no arguments ,  no return
#include <stdio.h>
void fac();
int main(){
    fac();
    return 0;
}
void fac(){
    int temp=1,i,n;
    printf("enter the number to find series:");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        temp*=i;
    }
    printf("factorial of %d is %d",n,temp);
}