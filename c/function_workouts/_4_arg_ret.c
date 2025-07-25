// rev
#include <stdio.h>
//int rev(int n);
int rev(int n){
    int a,b=0;
    while(n!=0){
        a=n%10;
        b=b*10+a;
        n/=10;
    }
    return b;
}
int main(){
    int n,revi;
    printf("enter the number to reverse:");
    scanf("%d",&n);
    revi=rev(n);
    printf("reversed number is %d are %d",n,revi);
    return 0;

}
