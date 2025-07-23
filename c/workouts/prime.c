#include <stdio.h>
int main(){
    int i,num,p=0;
    printf("enter the number to check whether prime or not:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(num%i==0){
            p+=1;
        }
    }
        if(p==2){
            printf("it is prime\n");
        }
        else{
            printf("it is not a prime\n");
        }
    return 0;
}