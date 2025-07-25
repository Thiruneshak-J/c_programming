// prime check ---- arguments , no return
#include <stdio.h>
void prime(int n);
int main(){
    int n,ch;
    while(1){
    printf("enter the number to check whether prime or not:");
    scanf("%d",&n);
    prime(n);
    printf("do you want to continue:(any integer-continue 0-exit()):");
    scanf("%d",&ch);
    if(ch==0){
        break;
    }
}
    return 0;
}
void prime(int n){
    int i,c=0;
    if(n==1){
        printf("neither prime nor composite");
        return;
    }
    else{
    for(i=2;i<n;i++){
        if(n%i==0){
            c+=1;
            break;
        }
    }
}
    if(c==0){
        printf("prime\n");
    }
    else{ 
        printf("not prime\n");
    }
}