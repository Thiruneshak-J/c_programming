/*#include <stdio.h>
int main(){
    int i,j,n=5;
    for (i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
/*
n=5
for i in range(0,n):
    for j in range(i):
        print("*",end="")
    print()
*/
//pattern
/*#include <stdio.h>
int main(){
    int i,j,n;
    printf("enter the n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
//max min
/*#include <stdio.h>
#include<stdlib.h>
int main(){
    int a,b,count=0,max,min,max1,min1;
    printf("enter the number A:");
    scanf("%d",&a);
    printf("enter the number B:");
    scanf("%d",&b);
    max=(a<b)?a:b;
    min=(a>b)?a:b;
    max1=(a+b + abs(a-b))/2;
    min1=(a+b - abs(a-b))/2;
    printf("minimum is:%d\n",max);
    printf("minimum is:%d\n",min);
    printf("minimum is A and B:%d\n",min1);
    printf("minimum is A and B:%d\n",max1);
    return 0;
}*/
#include <stdio.h>
int main(){
    int i;
    for(i=1;i<=4;i++){
        printf("*");

    }
    return 0;
}
