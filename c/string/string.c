#include <stdio.h>
#include <string.h>
void str(){
    char name[100];
    printf("enter the name:");
    scanf("%s",name);
    printf("your name is:%s\n",name);

}
void not_str(){
    char name[100],*p=name;
    printf("enter the name:");
    scanf("%s",name);
    for(*p;*p!='\0';p++){
        printf("%c",*p);
    }
}
void str1(){
    char name[50];
    int i,len;
    printf("enter the name:");
    scanf("%s",name);
    len=strlen(name);
    for(i=0;i<len;i++){
        printf("%c",name[i]);
    }



}
int main(){
    str();
    not_str();
    str1();
    return 0;
}