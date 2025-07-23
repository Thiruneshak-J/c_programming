//arthimetic operator
/*
#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the number b:");
    scanf("%d",&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;
    printf("addition of a and b is :%d\n",c);
    printf("the subraction of a and b is:%d\n",d);
    printf("the multiplication of a and b is:%d\n",e);
    printf("the divison of a and b is:%d\n",f);
    printf("the modules of a and b is :%d\n",g);

    return 0;  
}
*/
//assignment operator
/*#include <stdio.h>
int main(){
    int a,b;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the number:");
    scanf("%d",&b);
    a+=b;
    printf("the answer is :%d\n",a);

    printf("enter the number to subtract:");
    scanf("%d",&b);
    a-=b;
    printf("the answer is :%d\n",a);

    printf("enter the number to multiply:");
    scanf("%d",&b);
    a*=b;
    printf("the answer is :%d\n",a);
    
    printf("enter the number to divison:");
    scanf("%d",&b);
    a/=b;
    printf("the answer is :%d\n",a);
    return 0;
}*/
//relational operator
/*#include <stdio.h>
int main(){
    int a,b;
    printf("enter the number A:");
    scanf("%d",&a);
    printf("enter the number B:");
    scanf("%d",&b);
    if (a==b){
        printf("a is equal to b");
    }
    else if ( a<b){
        printf("b is greater than a");
    }
    else if (a>b){
        printf("a is gretaer than b");
    }
    else if (a>=b){
        printf("a is greater than or equal to b");
    }
    else if (a<=b){
        printf("a is lesser than or equal to b");
    }
    else{
        printf("a is not equal");
    }

}
*/
//logical operator
/*#include <stdio.h>
int main(){
    int a,b;
    printf("enter A number:");
    scanf("%d",&a);
    printf("enter the B number:");
    scanf("%d",&b);
    if (a!=b && a>b){
        printf(" A is top\n");
    }
    else if (a!=b && b>a ){
        printf("b is top\n");
    }
    else if (a<b || a!=b){
        printf(" may be b\n");
    }
}*/

//bitwise operator
#include <stdio.h>
int main(){
    int a=10,b=5;
    printf("%d\n",a&b);
    printf("%d\n",a|b);
    printf("%d\n",a^b);
    printf("%d\n",~b);
    printf("%d\n",b<<2);
    printf("%d\n",b>>2);
}
//unary operator
/*
#include <stdio.h>
int main(){
    int a=10;
    printf("the addition of:%d\n",+a);
    printf("the negative of a:%d\n",-a);
    printf("increment of a:%d\n",++a);
    printf("drement of a:%d\n",--a);
    printf("logical:%d\n",!a);
    printf("inverts of bit of a:%d\n",~a);
}*/
//ternary operator
/*#include <stdio.h>
int main(){
    int a,b,max;
    printf("enter the A number");
    scanf("%d",&a);
    printf("enter the B number");
    scanf("%d",&b);
    max=(a<b)?a:b;
    printf("maximum:%d\n",max);

}*/
//special opearators
//
//

//
//
//
//



