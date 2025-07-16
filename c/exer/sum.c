#include <stdio.h>
int main(){
    int a,i,temp=1;
    printf("enter the number to find sum:");
    scanf("%d",&a);
    for(i=2;i<=a;i++){
        temp+=i;
    }
    printf("sum of numbers is : %d",temp);
    return 0;
}