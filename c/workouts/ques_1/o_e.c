#include <stdio.h>
int main(){
    int a;
    printf("enter the number a:");
    scanf("%d",&a);
    if (a%2==0){
        printf("the given number is even");
    }
    else{
        printf("the given is odd");
    }
    return 0;
}

