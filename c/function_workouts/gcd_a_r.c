//gcd- arg and ret
#include <stdio.h>
int gcd(int a,int b);
int main(){
    int a,b,ch;
    while(1){
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the number:");
    scanf("%d",&b);
    int gc=gcd(a,b);
    printf("the gcd of %d and %d is %d\n",a,b,gc);
    printf("enter 1-continue:");
    scanf("%d",&ch);
    if(ch!=1){
        break;
    }
    }
    return 0;
}
int gcd(int a,int b){
    int c=1,min,i;                         // while(b!=0){
    min=(a<b)?a:b;                            //     int temp=b;
    for(i=1;i<=min;i++){                        //    b=a%b;
        if(a%i==0 && b%i==0){                     //  a=temp;
            c=i;                              // }
        }                                   //return a;
    }
    return c;
}
