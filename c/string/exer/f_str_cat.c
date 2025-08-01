#include <stdio.h>
int main(){
    char n1[50],n2[50],cat[50];
    printf("enter the name:");
    fgets(n1,sizeof(n1),stdin);
    printf("enter the name 2:");
    fgets(n2,sizeof(n2),stdin);
    printf("name 1: %s",n1);
    printf("name 2: %s",n2); 
    int len1=0,len2=0;
    while(n1[len1]!='\0'){
        len1++;
    }
    while(n2[len2]!='\0'){
        len2++;
    }
    int i;
    for(i=0;i<len1-1;i++){
        cat[i]=n1[i];
    }
    for(i=0;i<len2-1;i++){
        cat[len1++]=n2[i];
    }
    cat[len1]='\0';
    printf("%s",cat);
}