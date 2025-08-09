#include <stdio.h>
int main(){
    char str[]="thiru";
    char *p=str;
    while(*p!='\0'){
        printf("%c",*p);
        *p++;
    }
}