#include <stdio.h>
#include <string.h>
int main(){
    char n[50],ch;
    int len=0,h=0;
    printf("enter the number:");
    while(h<49){
        scanf("%c",&ch);
        if(ch=='\n'){
            break;
        }
        n[h++]=ch;
    }
    n[h]='\0';
    printf("the name you entered : %s\n",n);
    while(n[len]!='\0'){
        len+=1;
    }
    char *s=strchr(n,' ');
    char sp=*s;
    printf("modified text is :");
    int i,j,ind=0;
    for(i=0;i<len;i++){
        if(n[i]==sp){
            ind=i;
            for(j=ind;j<len;j++){
                printf("%c",n[j]);
            }
        }
    }
    printf(" ");
    int k;
    for(k=0;k<ind;k++){
        printf("%c",n[k]);
    }
    return 0;

}