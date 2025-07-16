/*#include <stdio.h>
int main(){
    int a,b;
    printf("enter the number a:");
    scanf("%d",&a);
    printf("enter the number b:");
    scanf("%d",&b);
    if (a>b){
        printf("%d(a) is the grestest number",a);
    }
    else if(b>a){
        printf("%d(b) is the grestest number",b);
    }
    else{
        printf("none");
    }
    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,lar;
    printf("enter the number a:");
    scanf("%d",&a);
    printf("enter the number b:");
    scanf("%d",&b);

    int max=(a+b+abs(a-b))/2;
    printf("grestest is%d",max);
    return 0;
}