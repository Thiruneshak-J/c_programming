#include <stdio.h>
#include <string.h>
int main(){
    char name[50],rev[50];
    printf("enter the name:");
    scanf("%s",name);
    int len=0,i,j=0;
    while(name[len]!='\0'){
        len+=1;
    }
    for(i=len-1;i>=0;i--){
        rev[j]=name[i];
        j+=1;
    }
    rev[j]='\0';
    printf("reversed name (without preprocesser directives): %s\n",rev);
    char name1[50];
    printf("enter the name:");
    scanf("%s",name1);
    name1==strrev(name1);
    printf("reversed name (with preprocessor directives): %s\n",name1);
    return 0;
}
