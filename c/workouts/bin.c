/*#include <stdio.h>
#include <math.h>
int main(){
    int bin,dec=0,i=0,rem;
    printf("enter the binary number:");
    scanf("%d",&bin);
    while(bin!=0){
        rem=bin%10;
        dec=dec+rem*pow(2,i);
        i++;
        bin=bin/10;
    }
    printf("decimal for binary is %d",dec);
    return 0;
}*/


#include <stdio.h>
#define sq(x) ((x)*(x))
int main(){
    int a=3,s;
    s=sq(a);
    printf("%d",s);
}