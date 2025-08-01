#include <stdio.h>
int main(){
    char n[50];
    int i=0;
    printf("enter the name:");
    fgets(n,sizeof(n),stdin);
    while(n[i]!='\0'){
        i++;
    }
    printf("length of string is : %d",i-1);
    return 0;
}