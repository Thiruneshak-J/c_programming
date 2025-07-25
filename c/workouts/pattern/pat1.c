#include <stdio.h>
void inc();
void dre(int n);
void num();
void numr(int nu);
void op_num();
int main(){
    printf("------------------------------  1 ----------------------------------------\n");
    inc();
    printf("------------------------------  2 ----------------------------------------\n");
    dre(5);
    printf("-------------------------------- 3 -------------------------------------\n");
    num();
    printf("--------------------------------- 4 ------------------------------------\n");
    numr(5);
    printf("----------------------------------- 5 -----------------------------------\n");
    op_num();
    printf("-------------------------------------  ---------------------------------\n");
    return 0;
}
void inc(){
    int i,j,n=5;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}
void dre(int n){
    int i,j;
    for(i=n-1;i>0;i--){    //for(i=0;i<n;i++){for (j=i;j<n;j++){printf("*")}print("\n")}
        for(j=0;j<i;j++){           
            printf("*");
        }
        printf("\n");
    }
}
void num(){
    int i,j,n=5;
    for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
void numr(int n){
    int i,j;
    for(i=1;i<n;i++){
        for(j=1;j<=n-i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
void op_num(){
    int i,j,n=5,k;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(k=n-i-1;k>0;k--){
            printf("%d",k);
    }
        printf("\n");
    }
}