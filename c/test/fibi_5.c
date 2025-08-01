#include <stdio.h>
int main(){
    int n,a=0,b=1,temp=0,i;
    printf("enter the number of terms:");
    scanf("%d",&n);
    printf("%d,",a);
    printf("%d,",b);
    for(i=3;i<=n;i++){
        temp=a+b;
        a=b;
        b=temp;
        printf("%d,",temp);
    }
    //printf("fibinocii series of %d terms are %d",n,temp);
    return 0;

}