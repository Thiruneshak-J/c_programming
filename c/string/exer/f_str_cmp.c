#include <stdio.h>
int main(){
    char n1[50],n2[50];
    printf("enter the name 1:");
    fgets(n1,sizeof(n1),stdin);
    printf("enter the name 2:");
    fgets(n2,sizeof(n2),stdin);
    if(n1==n2){
        printf("both are equal");
    }
    else{
        printf("not");
    }
    return 0;
}