#include <stdio.h>
int main(){
    int n,i,p=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            p+=1;
        }
    }
    if(p==2){
        printf("prime");
    }
    else{
        printf("not prime");
    }
     return 0;
}