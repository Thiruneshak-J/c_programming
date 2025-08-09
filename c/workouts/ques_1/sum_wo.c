#include <stdio.h>
int main(){
    int a,b,c,d,e,i;
    printf("enter the A number:");
    scanf("%d",&a);
    printf("enter the B number:");
    scanf("%d",&b);
    while (b != 0){
        int carry = a & b;      
        a = a ^ b;               
        b = carry << 1;      
        //a++;
        //b--;    
    }
    printf("sum of a & b:%d\n",a);
    return 0;
}