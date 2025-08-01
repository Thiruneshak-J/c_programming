#include <stdio.h>
int main(){
    char n1[50],rev[50];
    printf("enter the name:");
    fgets(n1,sizeof(n1),stdin);
    int len=0;
    while(n1[len]!='\0'){
        if(n1[len]=='\n'){
            n1[len]='\0';
            break;
        }
        len++;
    }
    int i,j=0;
    for(i=len-1;i>=0;i--){
        rev[j]=n1[i];
        j++;
    }
    rev[j]='\0';
    printf("the reverse of word is %s",rev);
    return 0;
}