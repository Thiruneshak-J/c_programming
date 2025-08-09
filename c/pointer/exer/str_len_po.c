#include <stdio.h>
int func(char *str)
{
    int len=0;
    while(*str!='\0'){
        len++;
        str++;
    }
    return len;

}
int main()
{
    char str[50],ch;
    int i=0;
    printf("enter the name:");
    while(i<49)
    {
        scanf("%c",&ch);
    if(ch=='\n')
    {
    break;
    }
    str[i++]=ch;
    }
    str[i]='\0';
    printf("you entered %s\n",str);
    int res=func(str);
    printf("length of string is %d",res);

}