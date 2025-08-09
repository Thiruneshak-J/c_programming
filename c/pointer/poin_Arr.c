#include <stdio.h>
int main(){
    char st[]="hi";
    char *p=st;
    while(*p!='\0'){
        printf("%c",*p);
        p++;
    }
}