// swap method - 1
/*#include <stdio.h>
int main(){
    int a,b;
    printf("enter the A number:");
    scanf("%d",&a);
    printf("enter the B number:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapped numbers as a=%d and b=%d",a,b);

}*/
//swp method -2
/*#include <stdio.h>
int main(){
    int a,b,temp;
    printf("enter the number");
    scanf("%d",&a);
    printf("enter the number:");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("the swapped a is %d and b is %d",a,b);
}*/
//swap method-3
#include <stdio.h>
int main(){
    int a,b;
    a=10;
    b=20;
    b=a;
    printf("b=:%d\n",b);
    a=b;
    printf("a=:%d\n",a);

}