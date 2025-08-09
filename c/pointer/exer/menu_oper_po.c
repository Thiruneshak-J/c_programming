#include <stdio.h>
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;

}
int sub(int a,int b)
{
    return a-b;

}
int mul(int a,int b)
{
    int e;
    e=a*b;
    return e;

}
int div(int a,int b)
{
    if(b==0)
    {
        printf("division by zero error");
        return 0;
    }
    else
    {
        int f=a/b;
        return f;
    }

}
int main(){
    int ch;
    printf("1--->addition\n");
    printf("2--->subreaction\n");
    printf("3--->multiplication\n");
    printf("4--->division\n");
    printf("enter the choice:");
    scanf("%d",&ch);
    int a,b,res;
    printf("enter the number a");
    scanf("%d",&a);
    printf("enter the number b");
    scanf("%d",&b);
    int(*oper)(int,int);
    switch(ch)
    {
        case 1:
        oper=add;
        res=oper(a,b);
        printf("addition of %d and %d = %d",a,b,res);
        break;
        case 2:
        oper=sub;
        res=oper(a,b);
        printf("subraction of %d and %d = %d",a,b,res);
        break;
        case 3:
        oper=mul;
        res=oper(a,b);
        printf("addition of %d and %d = %d",a,b,res);
        break;
        case 4:
        oper=div;
        res=oper(a,b);
        printf("addition of %d and %d = %d",a,b,res);
        break;
        default:
        printf("invaild choice\n");
    }
    return 0;
}