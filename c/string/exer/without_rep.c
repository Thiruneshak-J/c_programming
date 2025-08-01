#include <stdio.h>
#include <string.h>
int main(){
    char n[50],w_rep[50];
    int i,len;
    printf("enter the name:");
    fgets(n,sizeof(n),stdin);
    len=strlen(n);
    printf("you entered name:");
    for(i=0;i<len;i++){
        printf("%c",n[i]);
    }
    int j,k,f=0;
    int si=0;
    for(j=0;j<len;j++){
        f=0;
        for(k=0;k<si;k++){
            if(n[j] == w_rep[k]){
                f=1;
                break;
            }
        }
        if(!f){
            w_rep[si++]=n[j];
    }
    }
    w_rep[si]='\0';
    printf("without repitation words: %s\n",w_rep);
    return 0;
}