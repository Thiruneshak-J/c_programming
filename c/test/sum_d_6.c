/*#include <stdio.h>
int main(){
    int n,i,s=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s+=i;
    }
    printf("sum of %d numbers are %d",n,s);
    return 0;
}*/
#include <stdio.h>
int main(){
    int n,rem=0,temp=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        temp+=rem;
        n/=10;
    }
    printf("sum of digits are %d",temp);
    return 0;
}