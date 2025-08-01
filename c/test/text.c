#include <stdio.h>
#include <string.h>
int main(){
    char n[50],ch;
    int i=0;
    printf("enter the name:");
    while(i<49){
        scanf("%c",&ch);
        if(ch=='\n'){
            break;
        }
            n[i++]=ch;
        }
        n[i]='\0';
        printf("entered %s",n);
        return 0;
    }
