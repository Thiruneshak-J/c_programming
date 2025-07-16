#include <stdio.h>
int main(){
    int n,i,temp,temp1=0,temp2=1;
    printf("enter the number to find fibinocci series:");
    scanf("%d",&n);
    printf("%d %d ",temp1,temp2);
    for(i=3;i<=n;i++){
        temp=temp1+temp2;
        printf("%d ",temp);
        temp1=temp2;
        temp2=temp;
    }
    return 0;

}
