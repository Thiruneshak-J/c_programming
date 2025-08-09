#include <stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    printf("enter the number a and b :");
    scanf("%d %d",&a,&b);
    int (*add_ptr)(int,int)=add;
    int res=add_ptr(a,b);
    // int res=add(a,b); without pointer
    printf("addition of both numbers are : %d",res);
    

}