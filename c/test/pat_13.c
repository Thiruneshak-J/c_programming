#include <stdio.h>
int main(){
    printf("pattern 1:\n");
    int n=5,i,j;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("patter 2:\n");
    int m=5,k,h,l;
    for(k=1;k<=3;k++){
        for(h=k;h<3;h++){
            printf(" ");
        }
        for(l=1;l<=(2*k)-1;l++){
            if(k==1 || k==3 || l==1 || l==(2*k-1) ){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}