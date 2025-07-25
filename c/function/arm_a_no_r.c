#include <stdio.h>
int int_pow(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
void arm(int n);
int main(){
    int n,ch;
    while(1){
    printf("enter the number:");
    scanf("%d",&n);
    arm(n);
    printf("1-continue:");
    scanf("%d",&ch);
    if(ch!=1){
        break;
    }
    }
    return 0;
}
void arm(int n){
    int c=0,temp=n,org=n;
    while(temp!=0){
        temp/=10;
        c++;
    }
    int sum=0,r;
    temp=n;
    while(temp!=0){
        r=temp%10;
        sum += int_pow(r,c);
        temp/=10;
    }
    if(org==sum){
    printf("it is armstrong number\n");
    }
    else{
        printf("its is not an armstrong number\n");
    }
}