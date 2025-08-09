#include <stdio.h>
int main(){
    int num,org,rem,rev=0;
    printf("enter the number to check palidrome:");
    scanf("%d",&num);
    org=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    if (org==rev){
        printf("it is palindrome");
    }
    else{
        printf("it is non palindrome");
    }

}