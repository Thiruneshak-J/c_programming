#include <stdio.h>
int main(){
    char n1[50],sec;
    printf("enter the name:");
    fgets(n1,sizeof(n1),stdin);
    printf("enter the letter to serach:");
    scanf("%c",&sec);
    int len=0;
    while(n1[len]!='\0'){
        len++;
    }
    int i,j=0;
    for(i=0;i<len;i++){
        if(n1[i]==sec){
        j=i;
        break; // if we use (break;) this show first occerce 
        }      // if we not use (break;) this show last occerence
    }
    printf("the letter in the word at %d",j);
    return 0;
}