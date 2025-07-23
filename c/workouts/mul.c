#include <stdio.h>
int main(){
    int n,i,s;
    while(1){
    printf("enter the number to make multiplication table:");
    if(scanf("%d",&n)!=1){
        break;
    }
    if(n==0){
        break;
    }
    for(i=1;i<=20;i++){
        s=i*n;
        printf("%d * %d = %d\n",i,n,s);
    }
}
    return 0;
}