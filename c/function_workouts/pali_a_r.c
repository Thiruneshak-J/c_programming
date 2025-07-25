#include <stdio.h>
const char* pal(int n);
int main(){
    int n,ch;
    while(1){
    printf("enter the number:");
    scanf("%d",&n);
    const char* pali=pal(n);
    printf("%s\n",pali);
    printf("enter 1-continue :");
    scanf("%d",&ch);
    if(ch!=1){
        break;
    }
    }
    return 0;
}
const char* pal(int n){
    int rem,rev=0,org=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(org==rev){
    return "yes";
    }
    else{
        return "no";
    }
}
