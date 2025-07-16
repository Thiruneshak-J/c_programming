#include <stdio.h>
int main(){
    int n,i,temp=1;
    printf("enter to find factorial for number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        temp*=i;
    }
    printf("The answer of factorial is :%d\n",temp);
    return 0;

}