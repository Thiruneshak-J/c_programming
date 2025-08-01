#include <stdio.h>
int main(){
    char s[50],co[50];
    int len=0;
    printf("enter the name:");
    fgets(s,sizeof(s),stdin);
    while(s[len]!='\0'){
        len++;
    }
    int i,si=0;
    for(i=0;i<len;i++){
        co[i]=s[i];
        si+=1;
    }
    co[si]='\0';
    printf("copied by %s",co);
    return 0;
}